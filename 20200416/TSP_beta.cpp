//#include "TSP.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <vector>

struct cell
{
    int element; 
    struct cell *next;
};


/*double distance(std::tuple<double,double> c1,std::tuple<double,double> c2){
    return sqrt(pow(c1[0]-c2[0],2)+pow(c1[1]-c2[1],2));
}*/

struct cell *insert_element(int x,struct cell *p,struct cell *init)
{
    struct cell *q,*r;

    r=(struct cell*)malloc(sizeof(struct cell));

    if(p==NULL){
        q=init;
        init=r;
    }
    else{
        q=p->next;
        p->next=r;
    }

    r->element=x;
    r->next=q;
    return(init);
};

struct cell *delete_element(struct cell *p,struct cell *init){
    struct cell *q;

    if(init==NULL){
        exit(1);
    }
    if(p==NULL){
        q=init; init=init->next; free(q);
    }
    else{
        if(p->next==NULL){
            exit(1);
        }
        else{
            q=p->next; p->next=q->next; free(q);
        }
    }
    return(init);
}

/*
std::vector<int> NN(int n,std::vector<int> &notdone,std::vector<std::tuple<double,double>> &coordinate){
    int i;
    // 引数の確認(配列の何番目にどんな客が入ってるか)
    //printf("amount number of the nodes = %d\n",n);
    //for(i=1; i<n; i++){
        printf("%d個目のノード\n",i);
        printf("node_i = %d\t",notdone[i][1]);
        printf("x = %f\t",coordinate[i][0]);
        printf("y = %f\n",coordinate[i][1]);
        printf("the distance from now(=node_0) = %f\n",distance(coordinate[now][0],coordinate[now][1],coordinate[i][0],coordinate[i][1]));
    //}
    //printf("now = %d\n",now);

    struct cell *init=NULL;
    struct cell *p=init;
    struct cell *deleteelement;
    //int n_notdone=n; いらない？
    //int done[n];
    int now=notdone[0];
    int next;
    float min_distance=-1;
    float dist;
    std::vector<int> done{now}; //notdoneの最初のノードからスタート

    // notdoneの最初のノードをnotdoneから削除
    notdone.erase(notdone.begin());
    // 未走査のノード(notdone)の数(n)を1減らす
    n--;

    // 配列で実現したリストをポインタで実現したリストに組み替える
    for(i=0;i<n;i++){
        init=insert_element(i,p,init);
        if(i==0){
            p=init;
        }
        else{
            p=p->next;
        }
        //printf("%d\n",p->element);
    }
    
    while (n>0) //notdoneの長さが0ではない
    {
        p=init;
        while(!(p->next==NULL)){
            dist=distance(coordinate[now],coordinate[p->element]);
            if (min_distance>dist || min_distance<0){
                // nowとiの距離がmin_distanceよりも短ければ，min_distanceを更新
                min_distance=dist;
                // next(次に訪問する客の候補)を更新
                next=p->element;
                // deleteelementを更新
                deleteelement=p;
            }
            // 次のセルへ
            p=p->next;
        }

        // doneにnextを追加
        done.push_back(notdone[next]);
        // notdoneからnextを削除 このときpはnextの前のセルを指すポインタ
        init=delete_element(deleteelement,init);
        // nowの更新
        now=next;
        // 未走査のノード(notdone)の数(n)を1減らす
        n--;
        // min_distanceを負の値にセット
        min_distance=-1;
    }

    return done;
}*/

int main(){
    int i;
    int n=11;
    int node_name[n];
    //std::vector<int> node_name;
    //std::vector<std::tuple<double,double>> node_coordinate;
    struct cell *init=NULL;
    struct cell *p=init;

    // 下の書き方と等価 printf("%d\n",(*insert_element(10,p,init)).element);
    //printf("%d\n",insert_element(10,p,init)->element);
    /*init=insert_element(0,p,init);
    p=init;
    printf("%d\n",p->element);
    printf("%p\n",p->next);
    init=insert_element(1,p,init);
    p=p->next;
    printf("%d\n",p->element);
    printf("%p\n",p->next);*/

    for(i=0;i<n;i++){
        node_name[i]=i;
        init=insert_element(i,p,init);
        if(i==0){
            p=init;
        }
        else{
            p=p->next;
        }
        printf("%d\n",node_name[i]);
        printf("%d\n",p->element);
        printf("%p\n",p->next);
    }
    srand(0);
    /*for(i=0;i<n;i++){
        node_coordinate[i][0]=(double)rand()/RAND_MAX;
        node_coordinate[i][1]=(double)rand()/RAND_MAX;
        printf("node_name[%d].x=%f\t",i,node_coordinate[i][0]);
        printf("node_name[%d].y=%f\t",i,node_coordinate[i][1]);
    }*/

    //NN(n,node_name,node_coordinate);
    return 0;
}


/*PYBIND11_MODULE(TSP, m) {
    m.doc() = "solve Traveling Salesman Problem.";
    m.def("NN", &NN, "A function which solve TSP.");
}*/