using namespace std;
bool checkpin(string pin){
    if(pin.length()!=4){
        return false;
    }
    for(int i=0; i<pin.length(); i++){
        if(!isdigit(pin[i])){
            return false;
        }
    }
    if(pin=="2344"){
        return true;
    }else{
        return false;
    }
    
}