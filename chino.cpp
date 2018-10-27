vector<ZZ> rsa::precalculo(ZZ d,ZZ q,ZZ p){
    vector<ZZ> auxiliar;
    ZZ dp;
    ZZ dq;
    dp=modulo(d,p-1);
    dq=modulo(d,q-1);
    ZZ p_inversa;
    p_inversa=bynexpo(p,binario(q-2),q);
    auxiliar.push_back(dp);
    auxiliar.push_back(dq);
    auxiliar.push_back(p_inversa);
    return auxiliar;
}
ZZ rsa::restochino(vector<ZZ> g,ZZ j){
    ZZ cp;
    ZZ cq;
    cp=modulo(j,p);
    cq=modulo(j,q);
    ZZ x1;
    ZZ x2;
    x1=bynexpo(cp,binario(g[0]),p);
    x2=bynexpo(cq,binario(g[1]),q);
    ZZ h;
    h=modulo(((x2-x1)*g[2]),q);
    ZZ x;
    x=x1+h*p;
    return x;
}
