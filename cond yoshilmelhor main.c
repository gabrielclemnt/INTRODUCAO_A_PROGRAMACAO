#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double m, a, b, c, d, s;
    double verde, vermelho, roxo, amarelo;
    
    scanf("%lf\n", &m);
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    // a= verde, b= vermelho, c= roxo; d= amarelo
    
    verde = 80.0/a;
    vermelho = 100.0/b;
    roxo = 120.0/c;
    amarelo= 80.0/d;
    
    if(m<a && m<b && m<c && m<d){
        printf("Acho que vou a pe :(");
    }
    if(verde >= vermelho && verde >= roxo && verde >= amarelo){
        if(m>=a){
            printf("Verde");
            return 0;
        }
    }
    if(vermelho >= verde && vermelho>= roxo && vermelho >= amarelo){
        if(m>=b){
            printf("Vermelho");
            return 0;
        }
    }
    if(roxo >= verde && roxo >= vermelho && roxo >= amarelo){
        if(m>=c){
            printf("Roxo");
            return 0;
        }
    }
    if(amarelo >= verde && amarelo >= vermelho && amarelo >= roxo){
        if(m>=d){
            printf("Amarelo");
            return 0;
        }
    }
    
	return 0;
}