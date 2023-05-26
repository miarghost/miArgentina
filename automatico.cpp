
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>


using namespace std;

int main()
{
    int numImg1;
    int numImg2;
    int variablenum;
    int cambiarImagen1;
    int totalImg;
    bool primVez = true;
    cout<<"Primer numero de imagen y ultimo"<<endl;
    cin>>numImg1;
    cin>>numImg2;
    totalImg = numImg2 - numImg1 + 1;
    int numIMG = numImg1;
    cout<<"Numero de variables"<<endl;
    cin>>variablenum;
    cout<<"Numero de CambiarImagen"<<endl;
    cin>>cambiarImagen1;
    
    
    cout<<"var imagenes";
    cout<<variablenum;
    cout<<" =[";
    for(int i = 0; i<totalImg; i++){
        if(primVez==true){
        cout<<"'imagen";
        cout<<numImg1;
        cout<<"' , ";

        primVez = false;
        } else{
            numIMG = numIMG+1;
            cout<<"'imagen";
            cout<<numIMG;;
            if(i != totalImg -1){
            cout<<"' , ";
            } else{
                cout<<"'";
            }
        }
    }
    cout<<"];"<<endl;
    cout<<"var indiceActual";
    cout<<variablenum;
    cout<<" = 0;"<<endl;
    cout<<"var tiempoEspera";
    cout<<variablenum;
    cout<<" = 10;"<<endl;
    cout<<"var primVez";
    cout<<variablenum;
    cout<<" = true;"<<endl;
    cout<<"var startX, startY;"<<endl;
    cout<<"var lastChangeTime";
    cout<<variablenum;
    cout<<" = 0;"<<endl;
    cout<<"function handleTouchStart(event) {"<<endl<<"startX = event.touches[0].pageX;"<<endl<<"startY = event.touches[0].pageY;"<<endl<<"}"<<endl;
    cout<<"function handleTouchMove"<<cambiarImagen1<<"(event) {"<<endl<<"var currentTime = new Date().getTime();"<<endl<<"if (currentTime - lastChangeTime"<<variablenum<<" < 100) {"<<endl<<"return;"<<endl<<"}"<<endl;
    cout<<"lastChangeTime"<<variablenum<<"= currentTime;"<<endl<<"var touchX = event.touches[0].pageX;"<<endl<<"var touchY = event.touches[0].pageY;"<<endl<<"var deltaX = startX - touchX;"<<endl<<"var deltaY = startY - touchY;"<<endl<<"if (Math.abs(deltaX) > Math.abs(deltaY)) {"<<endl<<"if (deltaX > 20 ) {"<<endl<<"cambiarImagen"<<cambiarImagen1<<"();"<<endl<<"}"<<endl<<"}"<<endl<<"}"<<endl;
    cout<<"function handleTouchMove"<<cambiarImagen1 + 1<<"(event) {"<<endl<<"var currentTime = new Date().getTime();"<<endl<<"if (currentTime - lastChangeTime"<<variablenum<<" < 400) {"<<endl<<"return;"<<endl<<"}"<<endl;
    cout<<"lastChangeTime"<<variablenum<<"= currentTime;"<<endl<<"var touchX = event.touches[0].pageX;"<<endl<<"var touchY = event.touches[0].pageY;"<<endl<<"var deltaX = startX - touchX;"<<endl<<"var deltaY = startY - touchY;"<<endl<<"if (Math.abs(deltaX) > Math.abs(deltaY)) {"<<endl<<"if (deltaX < 20 ) {"<<endl<<"cambiarImagen"<<cambiarImagen1 + 1<<"();"<<endl<<"}"<<endl<<"}"<<endl<<"}"<<endl;
    cout<<"var myImage"<<cambiarImagen1<<" = document.getElementById('imagen"<<numImg1<<"');"<<endl<<"myImage"<<cambiarImagen1<<".addEventListener('touchstart', handleTouchStart, false);"<<endl<<"myImage"<<cambiarImagen1<<".addEventListener('touchmove', handleTouchMove"<<cambiarImagen1<<", false);"<<endl;
    cout<<"var myImage"<<cambiarImagen1 + 1<<" = document.getElementById('imagen"<<numImg2<<"');"<<endl<<"myImage"<<cambiarImagen1 + 1<<".addEventListener('touchstart', handleTouchStart, false);"<<endl<<"myImage"<<cambiarImagen1 + 1<<".addEventListener('touchmove', handleTouchMove"<<cambiarImagen1 + 1<<", false);"<<endl;
    
    cout<<"function cambiarImagen"<<cambiarImagen1<<"(){"<<endl<<"if (indiceActual"<<variablenum<<" < imagenes"<<variablenum<<".length){"<<endl<<"document.getElementById(imagenes"<<variablenum<<"[indiceActual"<<variablenum<<"]).style.display = 'none';"<<endl<<"indiceActual"<<variablenum<<"++;"<<endl<<"if (indiceActual"<<variablenum<<" == imagenes"<<variablenum<<".length){"<<endl<<"document.getElementById(imagenes"<<variablenum<<"[imagenes"<<variablenum<<".length-1]).style.display = 'inline';"<<endl<<"return;"<<endl<<"}"<<endl<<"document.getElementById(imagenes"<<variablenum<<"[indiceActual"<<variablenum<<"]).style.display = 'inline';"<<endl<<"setTimeout(cambiarImagen"<<cambiarImagen1<<", tiempoEspera"<<variablenum<<");"<<endl<<"}"<<endl<<"}"<<endl;
    cout<<"function cambiarImagen"<<cambiarImagen1 + 1<<"(){"<<endl<<"if (primVez"<<variablenum<<"==true) {"<<endl<<"indiceActual"<<variablenum<<" = imagenes"<<variablenum<<".length - 1;"<<endl<<"primVez"<<variablenum<<" = false;"<<endl<<"}"<<endl<<"document.getElementById(imagenes"<<variablenum<<"[indiceActual"<<variablenum<<"]).style.display = 'none';"<<endl<<"indiceActual"<<variablenum<<"--;"<<endl<<"if (indiceActual"<<variablenum<<" < 0) {"<<endl<<"document.getElementById(imagenes"<<variablenum<<"[0]).style.display = 'inline';"<<endl<<"indiceActual"<<variablenum<<"= 0;"<<endl<<"primVez"<<variablenum<<" = true;"<<endl<<"return;"<<endl<<"}"<<endl<<"document.getElementById(imagenes"<<variablenum<<"[indiceActual"<<variablenum<<"]).style.display = 'inline';"<<endl<<"setTimeout(cambiarImagen"<<cambiarImagen1 + 1 <<", tiempoEspera"<<variablenum<<");"<<endl<<"}";
    
}
