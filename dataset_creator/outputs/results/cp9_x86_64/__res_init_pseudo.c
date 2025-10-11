
void __res_init(void)

{
  short sVar1;
  int *piVar2;
  long lVar3;
  undefined2 uVar4;
  long in_FS_OFFSET;
  
  piVar2 = *(int **)(in_FS_OFFSET + -0x70);
  if (*piVar2 == 0) {
    *piVar2 = 5;
  }
  if (piVar2[1] == 0) {
    piVar2[1] = 2;
  }
  if ((*(byte *)(piVar2 + 2) & 1) == 0) {
    piVar2[2] = 0x2c0;
    piVar2[3] = 0;
  }
  else if (0 < piVar2[4]) {
    __res_iclose(piVar2,1);
    piVar2 = *(int **)(in_FS_OFFSET + -0x70);
    sVar1 = (short)piVar2[0x11];
    goto joined_r0x007a563a;
  }
  sVar1 = (short)piVar2[0x11];
joined_r0x007a563a:
  if (sVar1 != 0) {
    __res_vinit(piVar2,1);
    return;
  }
  uVar4 = __res_randomid();
  lVar3 = *(long *)(in_FS_OFFSET + -0x70);
  *(undefined2 *)(lVar3 + 0x44) = uVar4;
  __res_vinit(lVar3,1);
  return;
}

