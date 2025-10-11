
int FUN_007b0770(uint *param_1,char *param_2,ulong param_3,long *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  
  if (param_3 < 3) {
    *param_4 = -1;
    iVar3 = 0x22;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
  }
  else {
    do {
      lVar4 = FUN_00702b70(param_1);
      *param_4 = lVar4;
      param_2[param_3 - 1] = -1;
      lVar4 = FUN_00703150(param_2,param_3 & 0xffffffff,param_1);
      if (lVar4 == 0) {
        if ((*param_1 & 0x10) != 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
          return 2;
        }
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x22) {
          return *(int *)(in_FS_OFFSET + -0x58);
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
        return 0x16;
      }
      if (param_2[param_3 - 1] != -1) {
        if ((-1 < *param_4) && (iVar3 = FUN_00702a90(param_1,*param_4,0), -1 < iVar3)) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
          return 0x22;
        }
        *param_1 = *param_1 | 0x20;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1d;
        return 0x1d;
      }
      cVar1 = *param_2;
      bVar2 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2);
      pcVar6 = param_2;
      while ((bVar2 & 0x20) != 0) {
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
        bVar2 = *(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2);
      }
    } while ((cVar1 == '\0') || (cVar1 == '#'));
    iVar3 = 0;
    if (param_2 != pcVar6) {
      uVar5 = thunk_FUN_007129d0(pcVar6);
      thunk_FUN_00713610(param_2,pcVar6,uVar5);
    }
  }
  return iVar3;
}

