#include"keshe.h"
void init(graph* g) {//Ϊ���������������
	//������ʮ������Ĵ���
	strcpy_s(g->v[0].name, "����һ");
	strcpy_s(g->v[0].introduce, "����һ����");
	strcpy_s(g->v[1].name, "�����");
	strcpy_s(g->v[1].introduce, "���������");
	strcpy_s(g->v[2].name, "������");
	strcpy_s(g->v[2].introduce, "����������");
	strcpy_s(g->v[3].name, "������");
	strcpy_s(g->v[3].introduce, "�����Ľ���");
	strcpy_s(g->v[4].name, "������");
	strcpy_s(g->v[4].introduce, "���������");
	strcpy_s(g->v[5].name, "������");
	strcpy_s(g->v[5].introduce, "����������");
	strcpy_s(g->v[6].name, "������");
	strcpy_s(g->v[6].introduce, "�����߽���");
	strcpy_s(g->v[7].name, "�����");
	strcpy_s(g->v[7].introduce, "����˽���");
	strcpy_s(g->v[8].name, "�����");
	strcpy_s(g->v[8].introduce, "����Ž���");
	strcpy_s(g->v[9].name, "����ʮ");
	strcpy_s(g->v[9].introduce, "����ʮ����");
	for (int i = 0; i < 10; ++i) {
		g->v->num = i;
	}
	//������·��
		//����һ ���Ե��
	g->edge[0][1] = 250;	//�����(���룺250��)
	g->edge[0][2] = 400;	//������(���룺400��)
	g->edge[0][3] = 150;	//������(���룺150��)
	g->edge[0][4] = 350;	//������(���룺350��)
	g->edge[0][5] = 100;	//������(���룺100��)
	g->edge[0][6] = 200;	//������(���룺200��)
	for (int i = 7; i < 10; ++i) {//���ྰ�㲻�ɴ�
		g->edge[0][i] = M;
	}
	//����� ���Ե��
	g->edge[1][0] = 250;	//����һ(���룺250��)
	g->edge[1][2] = 280;	//������(���룺280��)
	g->edge[1][3] = 200;	//������(���룺200��)
	g->edge[1][4] = 450;	//������(���룺450��)
	g->edge[1][5] = 300;	//������(���룺300��)
	g->edge[1][6] = 120;	//������(���룺120��)
	for (int i = 7; i < 10; ++i) {
		g->edge[1][i] = M;
	}
	//������ ���Ե��
	g->edge[2][0] = 400;	//����һ(���룺400��)
	g->edge[2][1] = 280;	//�����(���룺280��)
	g->edge[2][3] = 150;	//������(���룺150��)
	g->edge[2][4] = 300;	//������(���룺300��)
	g->edge[2][5] = 110;	//������(���룺110��)
	g->edge[2][6] = 450;	//������(���룺450��)
	for (int i = 7; i < 10; ++i) {
		g->edge[2][i] = M;
	}
	//������ ���Ե��
	g->edge[3][0] = 150;	//����һ(���룺150��)
	g->edge[3][1] = 200;	//�����(���룺200��)
	g->edge[3][2] = 150;	//������(���룺150��)
	g->edge[3][4] = 320;	//������(���룺320��)
	g->edge[3][5] = 340;	//������(���룺340��)
	g->edge[3][6] = 240;	//������(���룺240��)
	for (int i = 7; i < 10; ++i) {
		g->edge[3][i] = M;
	}
	//������ ���Ե��
	g->edge[4][0] = 350;	//����һ(���룺350��)
	g->edge[4][1] = 450;	//�����(���룺450��)
	g->edge[4][2] = 300;	//������(���룺300��)
	g->edge[4][3] = 320;	//������(���룺320��)
	g->edge[4][5] = 280;	//������(���룺280��)
	g->edge[4][6] = 330;	//������(���룺330��)
	for (int i = 7; i < 10; ++i) {
		g->edge[4][i] = M;
	}
	//������ ���Ե��
	g->edge[5][0] = 100;	//����һ(���룺100��)
	g->edge[5][1] = 300;	//�����(���룺300��)
	g->edge[5][2] = 110;	//������(���룺110��)
	g->edge[5][3] = 340;	//������(���룺340��)
	g->edge[5][4] = 280;	//������(���룺280��)
	g->edge[5][6] = 250;	//������(���룺250��)
	g->edge[5][7] = 280;	//�����(���룺280��)
	g->edge[5][8] = 200;	//�����(���룺200��)
	g->edge[5][9] = 400;	//����ʮ(���룺400��)
	//������ ���Ե��
	g->edge[6][0] = 200;	//����һ(���룺200��)
	g->edge[6][1] = 120;	//�����(���룺120��)
	g->edge[6][2] = 450;	//������(���룺450��)
	g->edge[6][3] = 240;	//������(���룺240��)
	g->edge[6][4] = 330;	//������(���룺330��)
	g->edge[6][5] = 250;	//������(���룺250��)
	g->edge[6][7] = 300;	//�����(���룺300��)
	g->edge[6][8] = 150;	//�����(���룺150��)
	g->edge[6][9] = 180;	//����ʮ(���룺180��)
	//����� ���Ե��
	g->edge[7][5] = 280;	//������(���룺280��)
	g->edge[7][6] = 300;	//������(���룺300��)
	g->edge[7][8] = 220;	//�����(���룺220��)
	g->edge[7][9] = 350;	//����ʮ(���룺350��)
	for (int i = 0; i < 5; ++i) {
		g->edge[7][i] = M;
	}
	//����� ���Ե��
	g->edge[8][5] = 200;	//������(���룺200��)
	g->edge[8][6] = 150;	//������(���룺150��)
	g->edge[8][7] = 220;	//�����(���룺220��)
	g->edge[8][9] = 180;	//����ʮ(���룺180��)
	for (int i = 0; i < 5; ++i) {
		g->edge[8][i] = M;
	}
	//����ʮ ���Ե��
	g->edge[9][5] = 400;	//������(���룺400��)
	g->edge[9][6] = 180;	//������(���룺180��)
	g->edge[9][7] = 350;	//�����(���룺350��)
	g->edge[9][8] = 180;	//�����(���룺180��)
	for (int i = 0; i < 5; ++i) {
		g->edge[9][i] = M;
	}
	for (int i = 0; i < 10; ++i) {
		g->edge[i][i] = M;
	}
}
void menu() {//�˵�
	printf("++++++++++++++++++++++++++++++++++++\n");
	printf("          У԰������ѯϵͳ        \n");
	printf("1���г�ȫ����������\n");
	printf("2����ѯ������Ϣ\n");
	printf("3����ѯָ�����㵽���ྰ�����·��\n");
	printf("4����ѯ�����������������·��\n");
	printf("5����ѯ������������������·��\n");
	printf("++++++++++++++++++++++++++++++++++++\n");
}
void printv(graph* g) {//��ӡȫ����������
	for (int i = 0; i < 10; ++i) {
		printf(" %s ", g->v[i].name);
		if (i == 4) { printf("\n"); }
	}
	printf("\n");
}
void dijkstra(graph* g, int v0, int dist[], int path[]) {//����������̾���
	int find[10];//����Ѿ������ʵĵ�
	int v;//�������ʵ�
	int min;//δ�ҵ����·������е�ԭ������·������dist���ң�
	for (int i = 0; i < 10; ++i) {
		find[i] = 0;
		dist[i] = g->edge[v0][i];
		path[i] = v0;
	}
	dist[v0] = 0;
	find[v0] = 1;
	for (int i = 0; i < 10; ++i) {
		min = M;//ÿ������minΪ�趨��M
		for (int j = 0; j < 10; ++j) {//�ҵ�δ���ʽ�����ԭ����Сֵ
			if (!find[j] && dist[j] < min) {
				min = dist[j];
				v = j;
			}
		}
		find[v] = 1;
		for (int j = 0; j < 10; ++j) {//������Сֵ����dist��path
			if (!find[j] && (min + g->edge[v][j]) < dist[j]) {
				dist[j] = min + g->edge[v][j];
				path[j] = v;
			}
		}
	}
}
void dfs(graph* g, int current, int end, int visited[], int path[], int pathIndex) {//��������㷨	
	visited[current] = 1;//��ǰ��㱻����
	path[pathIndex] = current;//current�ǵ�ǰ�㣬pathindex��¼·���洢�˶��ٽ��
	pathIndex++;
	if (current == end) {
		// ��ӡ�ҵ���·��
		printf("�ҵ�·��: ");
		for (int i = 0; i < pathIndex; ++i) {//��path�洢·���ϵĽ��
			printf("%s", g->v[path[i]].name);//֮ǰ�洢��ʱ���Ǹ���++��ʽ���ȥ�ģ���ӡʱҲ�������˳��
			if (i != pathIndex - 1) {
				printf(" -> ");
			}
		}
		printf("\n");
	}
	else {
		for (int i = 0; i < 10; ++i) {
			// �ж��Ƿ����ڣ�ʹ�������ֵ��Ϊ����
			if (g->edge[current][i] != M && !visited[i]) {
				dfs(g, i, end, visited, path, pathIndex);
			}
		}
	}
	// ���ݣ���ǵ�ǰ����Ϊδ���ʣ���·�����Ƴ���ǰ����
	visited[current] = 0;
	pathIndex--;
}
void fapv(graph* g) {//�Ծ�������Ϊ�ؼ��ʲ�ѯ������Ϣand��ӡ
	char name[20];
	printf("�����뾰�����ƣ�");
	scanf_s("%s", name, sizeof(name));
	for (int i = 0; i < 10; ++i) {
		if (!strcmp(g->v[i].name, name)) {
			printf("%s\n", g->v[i].name);
			printf("%s\n", g->v[i].introduce);
			return;
		}
	}
	printf("û�ж�Ӧ���㣡\n");
}
void fape1(graph* g, int dist[], int path[]) {//��ѯһ���㵽���ྰ�����·��and��ӡ
	int v0;//ԭ��
	char na[20];//��������
	printf("������Ҫָ���ľ�������ƣ�");
	scanf_s("%s", na, sizeof(na));
	for (int i = 0; i < 10; ++i) {
		if (!strcmp(g->v[i].name, na)) {
			v0 = i;
			break;
		}
		else v0 = M;
	}
	if (v0 == M) {
		printf("�����ڸþ��㣡\n");
		return;
	}
	dijkstra(g, v0, dist, path);
	printf("��%s������������·��������:\n", na);
	for (int i = 0; i < 10; i++) {
		printf("%s->%s: ���� : %d, ���·�� : ", na, g->v[i].name, dist[i]);
		// �ӵ�ǰ�ڵ���ݵ���㣬����ӡ���·��
		int j = i;
		while (j != v0) {
			printf("%s <- ", g->v[j].name);
			j = path[j];
		}
		printf("%s\n", na);
	}
}
void fape2(graph* g, int dist[], int path[]) {//��ѯ����������·��
	char na1[10], na2[10];//�洢������������
	int v1, v2, j;//�洢���ƶ�Ӧ�ı�ţ�j��ӡʱ��
	while (1) {
		while (1) {
			printf("��һ���������ƣ�");
			scanf_s("%s", na1, sizeof(na1));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na1)) {
					v1 = i; break;
				}
				else v1 = M;
			}
			if (v1 == M) {
				printf("���㲻���ڣ��������룺\n");
			}
			else break;
		}
		while (1) {
			printf("�ڶ����������ƣ�");
			scanf_s("%s", na2, sizeof(na2));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na2)) {
					v2 = i; break;
				}
				else v2 = M;
			}
			if (v2 == M) {
				printf("���㲻���ڣ��������룺\n");
			}
			else break;
		}
		if (v1 == v2) {
			printf("����������ͬ���������룺\n");
		}
		else break;
	}
	dijkstra(g, v1, dist, path);
	j = v2;
	printf("%s -> %s,��̾��룺%d ,���·����\n", na1, na2, dist[v2]);
	while (j != v1) {
		printf("%s <- ", g->v[j].name);
		j = path[j];
	}
	printf("%s\n", na1);
}
void fape3(graph* g, int visited[], int path[], int pathIndex) {//��ѯ����ͬ�����ȫ��·��and��ӡ
	char na1[20], na2[20];//�洢������������
	int v1, v2;
	while (1) {
		while (1) {
			printf("��һ���������ƣ�");
			scanf_s("%s", na1, sizeof(na1));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na1)) {
					v1 = i; break;
				}
				else v1 = M;
			}
			if (v1 == M) {
				printf("���㲻���ڣ��������룺\n");
			}
			else break;
		}
		while (1) {
			printf("�ڶ����������ƣ�");
			scanf_s("%s", na2, sizeof(na2));
			for (int i = 0; i < 10; ++i) {
				if (!strcmp(g->v[i].name, na2)) {
					v2 = i; break;
				}
				else v2 = M;
			}
			if (v2 == M) {
				printf("���㲻���ڣ��������룺\n");
			}
			else break;
		}
		if (v1 == v2) {
			printf("����������ͬ���������룺\n");
		}
		else break;
	}
	dfs(g, v1, v2, visited, path, pathIndex);
}
