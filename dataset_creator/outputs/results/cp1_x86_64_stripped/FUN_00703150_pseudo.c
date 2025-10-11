
undefined1 * FUN_00703150(undefined1 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  
  if (0 < param_2) {
    if (param_2 == 1) {
      *param_1 = 0;
    }
    else {
      uVar1 = *param_3;
      *param_3 = uVar1 & 0xffffffdf;
      lVar2 = FUN_006fe490(param_3,param_1,(long)(param_2 + -1),10,1);
      uVar3 = *param_3;
      puVar4 = (undefined1 *)0x0;
      if ((lVar2 != 0) &&
         (((uVar3 & 0x20) == 0 ||
          (puVar4 = (undefined1 *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)))) {
        param_1[lVar2] = 0;
        uVar3 = *param_3;
        puVar4 = param_1;
      }
      *param_3 = uVar1 & 0x20 | uVar3;
      param_1 = puVar4;
    }
    return param_1;
  }
  return (undefined1 *)0x0;
}

