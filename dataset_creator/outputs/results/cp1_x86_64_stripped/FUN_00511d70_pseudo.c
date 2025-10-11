
int FUN_00511d70(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  
  if (param_2 == 9) {
    lVar2 = FUN_00510f50(0,param_4,param_3,**(undefined4 **)(param_1 + 8),0,0,0);
    if (lVar2 != 0) {
      FUN_0040f1c0(param_1,**(undefined4 **)(param_1 + 8),lVar2);
      return 1;
    }
  }
  else {
    if (param_2 != 10) {
      return -2;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar1 = **(int **)(param_1 + 8);
      if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
        cVar3 = ' ';
      }
      else {
        cVar3 = (iVar1 != 0x40b) + '8';
      }
      lVar2 = FUN_0041c320(*(long *)(param_1 + 0x20) + 0x11,cVar3,"../crypto/ec/ecx_meth.c",0xeb);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        iVar1 = **(int **)(param_1 + 8);
        if ((iVar1 != 0x40a) && (iVar1 != 0x43f)) {
          return (iVar1 != 0x40b) + 0x38;
        }
        return 0x20;
      }
    }
  }
  return 0;
}

