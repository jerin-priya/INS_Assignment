#include <iostream>
#include <string>
#include <map>
#include <cctype> 

int main() {
   
    std::string cipher1 = "af p xpkcaqvnpk pfg, af ipqe qpri, gauuikifc tpw, ceiri udvk tiki afgarxifrphni cd eao--wvmd popkwn, hiqpvri du ear jvaql vfgikrcpfgafm du cei xkafqaxnir du xrwqedearcdkw pfg du ear aopmafpcasi xkdhafmr afcd fit pkipr. ac tpr qdoudkcafm cd lfdt cepc au pfwceafm epxxifig cd ringdf eaorinu hiudki cei opceiopcaqr du cei uaing qdvng hi qdoxnicinw tdklig dvc--pfg edt rndtnw ac xkdqiigig, pfg edt odvfcpafdvr cei dhrcpqnir--ceiki tdvng pc niprc kiopaf dfi mddg oafg cepc tdvng qdfcafvi cei kiripkqe";
    std::string cipher2 = "aceah toz puvg vcdl omj puvg yudqecov, omj loj auum klu thmjuv hs klu zlcvu shv zcbkg guovz, upuv zcmdu lcz vuwovroaeu jczoyyuovomdu omj qmubyudkuj vukqvm. klu vcdluz lu loj avhqnlk aodr svhw lcz kvopuez loj mht audhwu o ehdoe eunumj, omj ck toz yhyqeoveg auecupuj, tlokupuv klu hej sher wcnlk zog, klok klu lcee ok aon umj toz sqee hs kqmmuez zkqssuj tckl kvuozqvu. omj cs klok toz mhk umhqnl shv sowu, kluvu toz oezh lcz yvhehmnuj pcnhqv kh wovpue ok.";

    std::map<char, int> counts1, counts2;
    int totalLetters1 = 0, totalLetters2 = 0;

    for (char c : cipher1) {
        if (isalpha(c)) {
            counts1[tolower(c)]++;
            totalLetters1++;
        }
    }

    for (char c : cipher2) {
        if (isalpha(c)) {
            counts2[tolower(c)]++;
            totalLetters2++;
        }
    }

    std::map<char, double> frequencies1, frequencies2;

    for (auto& pair : counts1) {
        frequencies1[pair.first] = 100.0 * pair.second / totalLetters1;
    }

    for (auto& pair : counts2) {
        frequencies2[pair.first] = 100.0 * pair.second / totalLetters2;
    }

    std::cout << "Frequencies for Cipher-1:\n";
    for (auto& pair : frequencies1) {
        std::cout << pair.first << ": " << pair.second << "%\n";
    }

    std::cout << "\n";

    std::cout << "Frequencies for Cipher-2:\n";
    for (auto& pair : frequencies2) {
        std::cout << pair.first << ": " << pair.second << "%\n";
    }

    return 0;
}
