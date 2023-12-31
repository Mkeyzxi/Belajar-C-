#include <iostream>
using namespace std;

const int MAX = 5;

struct Numbers{
    int num;
    Numbers *next;
};

Numbers *new_node, *front, *back,*current;

int count(){
    int count = 0;
    current = front;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

bool isEmpty(){
    if(front == NULL) return true;
    return false;
}

bool isFull(){
    if(count() > MAX) return true;
    return false;

}
#simpangan baku tersebar
sb_tersebar = function(x)
{
sqrt(sum((x-mean(x))^2)/(length(x)-1))
}

sb_tersebar(ika7)

#varians berkelompok
mean(ika7)
length(ika7)
varian_kelompok = function(x,y,z)
{
print(sum(((x-mean(y))^2)*z)/(length(y)-1))
}
 
ttktengah = c()
fi = c()
varian_kelompok(ttktengah,ika7,fi)

#simpangan baku berkelompok
sb_kelompok = function(x,y,z)
{
print(sqrt(sum(((x-mean(y))^2)*z)/(length(y)-1)))
}





#deviasi tunggal
deviasi_tunggal= function(x)
{
print((sum(abs(x-mean(x))))/n
)
}

deviasi_tunggal(lp6)


 
#deviasi kelompok
deviasi_kelompok= function(x,y,z)
{
print((sum(abs(x-mean(y)*z)))/length(y))
}

t
ttk_tengah=c()
fi=c()
deviasi_kelompok(ttk_tengah,lp6,fi)



#varians tersebar
mean(ika7)
length(ika7)
varian_tersebar = function(x)
{
sum((x-mean(x))^2)/(length(x)-1)
}

ttktengah = c(13,39,65,89)
fi = c(26,26,26,22)
sb_kelompok(ttktengah,ika7,fi)
void enqueue(int num){
    if(isFull()){
        cout << "Queue is full\n";

    }
    else{
        new_node = new Numbers();
        new_node->num = num;
        if(!isEmpty()){
            back->next = new_node;
            back = new_node;
        }else{
            new_node->next = NULL;
            back = front = new_node;

        }
    }
}

void dequeue(){
    current = front;
    front = front->next;
    cout << "Dequeue element is" << current->num << endl;
}

void display(){
    current = front;
    cout << "Element in Queue : ";
    while (current != NULL){
        cout << current->num << " ";
        current = current->next;
    }
}

int main(){
    enqueue(10);
    enqueue(40);
    enqueue(2);
    enqueue(1);
    dequeue();
    dequeue();
    display();
    
    enqueue(90);
    display();
}