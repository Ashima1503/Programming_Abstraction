#include <iostream>//pointers to structure
using namespace std;
struct movies_t{
    string title;
    int year;
};
struct friends_t{
    string name;
    string email;
    movies_t fav_movie;

}charlie,maria;
int main(){
    cin>>maria.name;
    cout<<maria.name<<endl;

    friends_t yudhvir;
    yudhvir.name="abc";
    yudhvir.email="abc@gmail.com";
    yudhvir.fav_movie.title="Badla";
    yudhvir.fav_movie.year=2015;
    cout<<yudhvir.name<<endl;
    cout<<yudhvir.email<<endl;
    cout<<yudhvir.fav_movie.title<<endl;
    cout<<yudhvir.fav_movie.year<<endl;

   /* movies_t amovie;
    movies_t *pmovie;
    amovie.title="abcd";
    amovie.year=2002;
    pmovie=&amovie;//address of amvie is stored in ptr pmovie
    cout<<pmovie->title<<endl;//that means *(pmovie).title==> amovie.title
    cout<<pmovie->year<<endl;////that means *(pmovie).year==> amovie.year*/
    return 0;
}
