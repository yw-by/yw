#include"keshe.h"
void init(graph* g) {//为了主程序看起来简洁
	//下面是十个景点的存入
	strcpy_s(g->v[0].name, "景点一");
	strcpy_s(g->v[0].introduce, "景点一介绍");
	strcpy_s(g->v[1].name, "景点二");
	strcpy_s(g->v[1].introduce, "景点二介绍");
	strcpy_s(g->v[2].name, "景点三");
	strcpy_s(g->v[2].introduce, "景点三介绍");
	strcpy_s(g->v[3].name, "景点四");
	strcpy_s(g->v[3].introduce, "景点四介绍");
	strcpy_s(g->v[4].name, "景点五");
	strcpy_s(g->v[4].introduce, "景点五介绍");
	strcpy_s(g->v[5].name, "景点六");
	strcpy_s(g->v[5].introduce, "景点六介绍");
	strcpy_s(g->v[6].name, "景点七");
	strcpy_s(g->v[6].introduce, "景点七介绍");
	strcpy_s(g->v[7].name, "景点八");
	strcpy_s(g->v[7].introduce, "景点八介绍");
	strcpy_s(g->v[8].name, "景点九");
	strcpy_s(g->v[8].introduce, "景点九介绍");
	strcpy_s(g->v[9].name, "景点十");
	strcpy_s(g->v[9].introduce, "景点十介绍");
	for (int i = 0; i < 10; ++i) {
		g->v->num = i;
	}
	//下面是路径
		//景点一 可以到达：
	g->edge[0][1] = 250;	//景点二(距离：250米)
	g->edge[0][2] = 400;	//景点三(距离：400米)
	g->edge[0][3] = 150;	//景点四(距离：150米)
	g->edge[0][4] = 350;	//景点五(距离：350米)
	g->edge[0][5] = 100;	//景点六(距离：100米)
	g->edge[0][6] = 200;	//景点七(距离：200米)
	for (int i = 7; i < 10; ++i) {//其余景点不可达
		g->edge[0][i] = M;
	}
	//景点二 可以到达：
	g->edge[1][0] = 250;	//景点一(距离：250米)
	g->edge[1][2] = 280;	//景点三(距离：280米)
	g->edge[1][3] = 200;	//景点四(距离：200米)
	g->edge[1][4] = 450;	//景点五(距离：450米)
	g->edge[1][5] = 300;	//景点六(距离：300米)
	g->edge[1][6] = 120;	//景点七(距离：120米)
	for (int i = 7; i < 10; ++i) {
		g->edge[1][i] = M;
	}
	//景点三 可以到达：
	g->edge[2][0] = 400;	//景点一(距离：400米)
	g->edge[2][1] = 280;	//景点二(距离：280米)
	g->edge[2][3] = 150;	//景点四(距离：150米)
	g->edge[2][4] = 300;	//景点五(距离：300米)
	g->edge[2][5] = 110;	//景点六(距离：110米)
	g->edge[2][6] = 450;	//景点七(距离：450米)
	for (int i = 7; i < 10; ++i) {
		g->edge[2][i] = M;
	}
	//景点四 可以到达：
	g->edge[3][0] = 150;	//景点一(距离：150米)
	g->edge[3][1] = 200;	//景点二(距离：200米)
	g->edge[3][2] = 150;	//景点三(距离：150米)
	g->edge[3][4] = 320;	//景点五(距离：320米)
	g->edge[3][5] = 340;	//景点六(距离：340米)
	g->edge[3][6] = 240;	//景点七(距离：240米)
	for (int i = 7; i < 10; ++i) {
		g->edge[3][i] = M;
	}
	//景点五 可以到达：
	g->edge[4][0] = 350;	//景点一(距离：350米)
	g->edge[4][1] = 450;	//景点二(距离：450米)
	g->edge[4][2] = 300;	//景点三(距离：300米)
	g->edge[4][3] = 320;	//景点四(距离：320米)
	g->edge[4][5] = 280;	//景点六(距离：280米)
	g->edge[4][6] = 330;	//景点七(距离：330米)
	for (int i = 7; i < 10; ++i) {
		g->edge[4][i] = M;
	}
	//景点六 可以到达：
	g->edge[5][0] = 100;	//景点一(距离：100米)
	g->edge[5][1] = 300;	//景点二(距离：300米)
	g->edge[5][2] = 110;	//景点三(距离：110米)
	g->edge[5][3] = 340;	//景点四(距离：340米)
	g->edge[5][4] = 280;	//景点六(距离：280米)
	g->edge[5][6] = 250;	//景点七(距离：250米)
	g->edge[5][7] = 280;	//景点八(距离：280米)
	g->edge[5][8] = 200;	//景点九(距离：200米)
	g->edge[5][9] = 400;	//景点十(距离：400米)
	//景点七 可以到达：
	g->edge[6][0] = 200;	//景点一(距离：200米)
	g->edge[6][1] = 120;	//景点二(距离：120米)
	g->edge[6][2] = 450;	//景点三(距离：450米)
	g->edge[6][3] = 240;	//景点四(距离：240米)
	g->edge[6][4] = 330;	//景点五(距离：330米)
	g->edge[6][5] = 250;	//景点六(距离：250米)
	g->edge[6][7] = 300;	//景点八(距离：300米)
	g->edge[6][8] = 150;	//景点九(距离：150米)
	g->edge[6][9] = 180;	//景点十(距离：180米)
	//景点八 可以到达：
	g->edge[7][5] = 280;	//景点六(距离：280米)
	g->edge[7][6] = 300;	//景点七(距离：300米)
	g->edge[7][8] = 220;	//景点九(距离：220米)
	g->edge[7][9] = 350;	//景点十(距离：350米)
	for (int i = 0; i < 5; ++i) {
		g->edge[7][i] = M;
	}
	//景点九 可以到达：
	g->edge[8][5] = 200;	//景点六(距离：200米)
	g->edge[8][6] = 150;	//景点七(距离：150米)
	g->edge[8][7] = 220;	//景点八(距离：220米)
	g->edge[8][9] = 180;	//景点十(距离：180米)
	for (int i = 0; i < 5; ++i) {
		g->edge[8][i] = M;
	}
	//景点十 可以到达：
	g->edge[9][5] = 400;	//景点六(距离：400米)
	g->edge[9][6] = 180;	//景点七(距离：180米)
	g->edge[9][7] = 350;	//景点八(距离：350米)
	g->edge[9][8] = 180;	//景点九(距离：180米)
	for (int i = 0; i < 5; ++i) {
		g->edge[9][i] = M;
	}
	for (int i = 0; i < 10; ++i) {
		g->edge[i][i] = M;
	}
}
void menu() {//菜单
	printf("++++++++++++++++++++++++++++++++++++\n");
	printf("          校园导游咨询系统        \n");
	printf("1、列出全部景点名称\n");
	printf("2、查询景点信息\n");
	printf("3、查询指定景点到其余景点最短路径\n");
	printf("4、查询任意两个景点间的最短路径\n");
	printf("5、查询任意两个景点间的所有路径\n");
	printf("++++++++++++++++++++++++++++++++++++\n");
}
void printv(graph* g) {//打印全部景点名称
	for (int i = 0; i < 10; ++i) {
		printf(" %s ", g->v[i].name);
		if (i == 4) { printf("\n"); }
	}
	printf("\n");
}
void dijkstra(graph* g, int v0, int dist[], int path[]) {//计算两点最短距离
	int find[10];//标记已经被访问的点
	int v;//将被访问点
	int min;//未找到最短路径结点中到原点的最短路径（在dist里找）
	for (int i = 0; i < 10; ++i) {
		find[i] = 0;
		dist[i] = g->edge[v0][i];
		path[i] = v0;
	}
	dist[v0] = 0;
	find[v0] = 1;
	for (int i = 0; i < 10; ++i) {
		min = M;//每次重置min为设定的M
		for (int j = 0; j < 10; ++j) {//找到未访问结点距离原点最小值
			if (!find[j] && dist[j] < min) {
				min = dist[j];
				v = j;
			}
		}
		find[v] = 1;
		for (int j = 0; j < 10; ++j) {//根据最小值更新dist和path
			if (!find[j] && (min + g->edge[v][j]) < dist[j]) {
				dist[j] = min + g->edge[v][j];
				path[j] = v;
			}
		}
	}
}
void dfs(graph* g, int current, int end, int visited[], int path[], int pathIndex) {//深度优先算法	
	visited[current] = 1;//当前结点被访问
	path[pathIndex] = current;//current是当前点，pathindex记录路径存储了多少结点
	pathIndex++;
	if (current == end) {
		// 打印找到的路径
		printf("找到路径: ");
		for (int i = 0; i < pathIndex; ++i) {//用path存储路径上的结点
			printf("%s", g->v[path[i]].name);//之前存储的时候是根据++方式存进去的，打印时也按照这个顺序
			if (i != pathIndex - 1) {
				printf(" -> ");
			}
		}
		printf("\n");
	}
	else {
		for (int i = 0; i < 10; ++i) {
			// 判断是否相邻，使用无穷大值作为条件
			if (g->edge[current][i] != M && !visited[i]) {
				dfs(g, i, end, visited, path, pathIndex);
			}
		}
	}
	// 回溯，标记当前顶点为未访问，从路径中移除当前顶点
	visited[current] = 0;
	pathIndex--;
}
void fapv(graph* g) {//以景点名称为关键词查询景点信息and打印
	char name[20];
	printf("请输入景点名称：");
	scanf_s("%s", name, sizeof(name));
	for (int i = 0; i < 10; ++i) {
		if (!strcmp(g->v[i].name, name)) {
			printf("%s\n", g->v[i].name);
			printf("%s\n", g->v[i].introduce);
			return;
		}
	}
	printf("没有对应景点！\n");
}
void fape1(graph* g, int dist[], int path[]) {//查询一景点到其余景点最短路径and打印
	int v0;//原点
	char na[20];//景点名称
	printf("请输入要指定的景点的名称：");
	scanf_s("%s", na, sizeof(na));
	for (int i = 0; i < 10; ++i) {
		if (!strcmp(g->v[i].name, na)) {
			v0 = i;
			break;
		}
		else v0 = M;
	}
	if (v0 == M) {
		printf("不存在该景点！\n");
		return;
	}
	dijkstra(g, v0, dist, path);
	printf("从%s到各景点的最短路径及距离:\n", na);
	for (int i = 0; i < 10; i++) {
		printf("%s->%s: 距离 : %d, 最短路径 : ", na, g->v[i].name, dist[i]);
		// 从当前节点回溯到起点，并打印最短路径
		int j = i;
		while (j != v0) {
			printf("%s <- ", g->v[j].name);
			j = path[j];
		}
		printf("%s\n", na);
	}
}
void fape2(graph* g, int dist[], int path[]) {//查询两景点间最短路径
	char na1[10], na2[10];//存储两个景点名称
	int v1, v2, j;//存储名称对应的编号，j打印时用
	while (1) {
		while (1) {
			printf("第一个景点名称：");
			scanf_s("%s", na1, sizeof(na1));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na1)) {
					v1 = i; break;
				}
				else v1 = M;
			}
			if (v1 == M) {
				printf("景点不存在！重新输入：\n");
			}
			else break;
		}
		while (1) {
			printf("第二个景点名称：");
			scanf_s("%s", na2, sizeof(na2));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na2)) {
					v2 = i; break;
				}
				else v2 = M;
			}
			if (v2 == M) {
				printf("景点不存在！重新输入：\n");
			}
			else break;
		}
		if (v1 == v2) {
			printf("景点名称相同！重新输入：\n");
		}
		else break;
	}
	dijkstra(g, v1, dist, path);
	j = v2;
	printf("%s -> %s,最短距离：%d ,最短路径：\n", na1, na2, dist[v2]);
	while (j != v1) {
		printf("%s <- ", g->v[j].name);
		j = path[j];
	}
	printf("%s\n", na1);
}
void fape3(graph* g, int visited[], int path[], int pathIndex) {//查询两不同景点间全部路径and打印
	char na1[20], na2[20];//存储两个景点名称
	int v1, v2;
	while (1) {
		while (1) {
			printf("第一个景点名称：");
			scanf_s("%s", na1, sizeof(na1));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na1)) {
					v1 = i; break;
				}
				else v1 = M;
			}
			if (v1 == M) {
				printf("景点不存在！重新输入：\n");
			}
			else break;
		}
		while (1) {
			printf("第二个景点名称：");
			scanf_s("%s", na2, sizeof(na2));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na2)) {
					v2 = i; break;
				}
				else v2 = M;
			}
			if (v2 == M) {
				printf("景点不存在！重新输入：\n");
			}
			else break;
		}
		if (v1 == v2) {
			printf("景点名称相同！重新输入：\n");
		}
		else break;
	}
	dfs(g, v1, v2, visited, path, pathIndex);
}
