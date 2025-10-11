
int added_obj_cmp(int *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char *__s1;
  char *__s2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = iVar4 - *param_2;
  if (iVar3 == 0) {
    plVar1 = *(long **)(param_1 + 2);
    puVar2 = *(undefined8 **)(param_2 + 2);
    if (iVar4 == 2) {
      __s1 = (char *)plVar1[1];
      if (__s1 == (char *)0x0) {
        return -1;
      }
      __s2 = (char *)puVar2[1];
    }
    else {
      if (2 < iVar4) {
        if (iVar4 == 3) {
          return (int)plVar1[2] - *(int *)(puVar2 + 2);
        }
        return iVar3;
      }
      if (iVar4 == 0) {
        iVar4 = *(int *)((long)plVar1 + 0x14) - *(int *)((long)puVar2 + 0x14);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = bcmp((void *)plVar1[3],(void *)puVar2[3],(long)*(int *)((long)plVar1 + 0x14));
        return iVar4;
      }
      if (iVar4 != 1) {
        return iVar3;
      }
      __s1 = (char *)*plVar1;
      if (__s1 == (char *)0x0) {
        return -1;
      }
      __s2 = (char *)*puVar2;
    }
    if (__s2 != (char *)0x0) {
      iVar4 = strcmp(__s1,__s2);
      return iVar4;
    }
    iVar3 = 1;
  }
  return iVar3;
}

