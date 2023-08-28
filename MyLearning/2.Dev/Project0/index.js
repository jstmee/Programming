
//key=


const { Telegraf } = require('telegraf');
const { message } = require('telegraf/filters');

const bot = new Telegraf("bottoken");

bot.start((ctx) => ctx.reply('Welcome to my bot vishnu'));
let template=`#include<bits/stdc++.h>
#define int long long
using namespace std;


void myf(){


}



int32_t main(){
    #ifndef ONLINE_JUDGE
           freopen("D:\\Programming\\C++ Programming\\input.txt","r",stdin);
           freopen("D:\\Programming\\C++ Programming\\output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    
    while(t--){
        myf();
    }
    return 0;
}`;
bot.command('mycptemplate', (ctx) => ctx.reply(template));

bot.launch();