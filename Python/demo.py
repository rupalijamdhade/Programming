import threading
print("______welcome________")

print("demonstration of multithreading")

def fun(number):
    for i in range(number):
        print(i)

if __name__=="__main__":
    number=5
    thread1=threading.Thread(target=fun,args=(number,))

    thread2=threading.Thread(target=fun,args=(number,))

    #will excute both in parallel
    thread1.start()
    thread2.start()
    #join threads back to the parent processs,

    thread1.join()
    thread2.join()