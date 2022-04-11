#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string cu("besir");
	/* empty() fonksiyonu, bir stringin boş olup olmadığını kontrol eder*/
	if (cu.empty())
	{
		cout<<"string boş aga"<<endl;
	}
	//çıktı: bu string boş aga

//------------------------------------------------------------------------------

/*clear fonksiyonu içi dolu olan stringi sıfırlar */

	cu.clear();
	cout<<"merhaba "<<cu<<endl;
	//çıktı: merhaba
//------------------------------------------------------------------------------	
	/* append fonksiyonu stringin sonuna yazmak 
	istediğin başka bir stringi ekler */
	cu.append("@gmail.com");
	//çıktı: besir@gmail.com
//------------------------------------------------------------------------------	
	/* at() fonksiyonu bir strinign belirtilen sayıya göre
	  o sayının indeksini yani tek bir harfini alır*/
	cout<<cu.at(0)<<endl;
	//çıktı: b
//--------------------------------------------------------------------------------
	/*substr hakkında ahsetmeye gerek yok herhalde. bir stringin belirtilen 
	iki sayının arasındaki indekslerini geri döndürür. */
	cout<<cu.substr(0,2)<<endl;
	//çıktı: bes
//---------------------------------------------------------------------------------
	/*insert fonksiyonu çok önemlidir çünkü daha esnektir. bie sayı ve bir string olarak parametre alan bu fonksiyonun olayı, 
	girilen sayı, o stringin hangi indeksine ekleyeceğimizi gösterir
	*/
	cout<<cu.insert(0,"@");
	//çıktı: @besir
//--------------------------------------------------------------------------------
	/*find() fonksiyonu, sayı return eder. Çünkü bir stringde aradığımız bir
	karakteri o stringin kaçıncı indisinde bulunduğunu int bir değer ile retrun eder
	*/
	cout<<cu.find("b")<<endl;
	//çıktı: 0

//---------------------------------------------------------------------------------

	/* erase fonksiyonu belirtilen iki indis arasındaki karakterleri siler
	*/
	cout<<cu.erase(0,2)<<endl;
	//çıktı: ir
	return 0;
}
