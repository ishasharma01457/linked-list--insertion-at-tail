class Node:

    def __init__(self, item):
        self.item = item
        self.nextnum = None


class xLinkedList:

    def __init__(self):
        self.head = None


if __name__ == '__main__':

    list = xLinkedList()

    list.head = Node(0)
    second = Node(6)
    third = Node(9)


    list.head.nextnum = second
    second.nextnum = third


    while list.head != None:
        print(list.head.item, end=" ")
        list.head = list.head.nextnum
