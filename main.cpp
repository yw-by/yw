#include "keshe.h"

int main() {
    graph g;
    init(&g); // ��ʼ��ͼ����

    int choice;
    int dist[10]; // �洢��̾���
    int path[10]; // �洢���·��
    int visited[10]; // ����������������ı������
    int pathIndex = 0; // ��¼·������

    while (1) {
        menu(); // ��ӡ�˵�
        printf("��ѡ���ܣ�");
        scanf_s("%d", &choice);
        switch (choice) {
        case 1:
            printf("ȫ�������������£�\n");
            printv(&g);
            break;
        case 2:
            fapv(&g);
            break;
        case 3:
            fape1(&g, dist, path);
            break;
        case 4:
            fape2(&g, dist, path);
            break;
        case 5:
            // ��շ��ʱ������
            for (int i = 0; i < 10; ++i) {
                visited[i] = 0;
            }
            fape3(&g, visited, path, pathIndex);
            break;
        case 0:
            printf("���������\n");
            return 0; // �˳�����
        default:
            printf("��Чѡ��\n");
            break;
        }
    }

    return 0;
}
