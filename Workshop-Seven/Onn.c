#include <stdio.h>
#include "lodepng.h"
#include "stdlib.h"

int main(){
	unsigned char *Image;
	unsigned int width, height,r,g,b,a;
	int i,j;
	unsigned int error;
	error=lodepng_decode32_file(&Image,&width,&height,"icon-32.png");
	if(error){
		printf("Error opening the file: %d: %s", error, lodepng_error_text(error));
	}
	printf("Width:%d Height:%d\n",width,height);
	for (i=0;i<height;i++){
		for(j=0;j<width;j++){
			r=Image[4*width*i+4*j+0];
			g=Image[4*width*i+4*j+1];
			b=Image[4*width*i+4*j+2];
			a=Image[4*width*i+4*j+3];
			r=255-r;
			g=255-g;
			b=255-b;
			Image[4*width*i+4*j+0]=r;
			Image[4*width*i+4*j+1]=g;
			Image[4*width*i+4*j+2]=b;
//			printf("[%d %d %d %d]",r,g,b,a);
		}
		printf("\n");
	}
	unsigned char *png;
	size_t pngsize;
	error=lodepng_encode32(&png,&pngsize,Image, width, height);
	if(!error){
		lodepng_save_file(png,pngsize,"negative.png");
	}
	free(Image);
	free(png);

    return 0;
}
