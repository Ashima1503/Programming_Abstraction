#include <iostream>//pointers to structure
using namespace std;
struct movies_t{
    string title;
    int year;
};

int main(){
   
    movies_t amovie;
    movies_t *pmovie;
    amovie.title="abcd";
    amovie.year=2002;
    pmovie=&amovie;//address of amvie is stored in ptr pmovie
    cout<<pmovie->title<<endl;//that means *(pmovie).title==> amovie.title
    cout<<pmovie->year<<endl;////that means *(pmovie).year==> amovie.year
    return 0;
}
