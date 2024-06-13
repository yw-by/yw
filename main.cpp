#include "keshe.h"

int main() {
    graph g;
    init(&g); // 初始化图数据

    int choice;
    int dist[10]; // 存储最短距离
    int path[10]; // 存储最短路径
    int visited[10]; // 用于深度优先搜索的标记数组
    int pathIndex = 0; // 记录路径长度

    while (1) {
        menu(); // 打印菜单
        printf("请选择功能：");
        scanf_s("%d", &choice);
        switch (choice) {
        case 1:
            printf("全部景点名称如下：\n");
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
            // 清空访问标记数组
            for (int i = 0; i < 10; ++i) {
                visited[i] = 0;
            }
            fape3(&g, visited, path, pathIndex);
            break;
        case 0:
            printf("程序结束。\n");
            return 0; // 退出程序
        default:
            printf("无效选择！\n");
            break;
        }
    }

    return 0;
}
