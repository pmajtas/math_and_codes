#pragma once

namespace math{

    template<typename T>
    T pow(T in, int pow)
    {
        T ret = 1;

        if(pow < 0)
            in = 1/in;

        for(int i = 0; i < pow; ++i)
        {
            ret *= in;
        }
        return ret;
    }

    template<typename T>
    float sqrt(T in)
    {
        float ret = (float)in/5; //value set empirically, any suggestions welcome, Bakhshali method
        float a;
        if(in==0 || in==1) return (float)in;
        for(int i=0;i<2;++i)
        {
            a = (in-ret*ret)/(2*ret);
            ret = ret + a;
            ret = ret - (a*a)/(2*ret);
        }
        return ret;
    }

    /*
    mod notes:
     -11 - (-11 % 10 ) = -11 - (-1) = -10
     -11 % 10 = -1  ->  -11 = -1 * 10 + (-1)
     31 % -11 = 9  ->  31 = (-2) * (-11) + 9
    */

    template<typename T>
    T floor(T in, int sep = 0)
    {
        T ret;
        if(in%pow(10,sep)==0) return in;

        if(in<0)
            ret = in - in%pow(10,sep) - pow(10,sep);
        else
            ret = in - in%pow(10,sep);
        return ret;
    }

    template<typename T>
    T ceil(T in, int sep = 0)
    {
        T ret;
        if(in%pow(10,sep)==0) return in;
        
        ret = floor(in + pow(10,sep) ,sep);

        return ret;
    }
    
};
