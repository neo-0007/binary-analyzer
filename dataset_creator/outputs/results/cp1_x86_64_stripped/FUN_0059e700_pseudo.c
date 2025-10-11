
uint FUN_0059e700(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    FUN_0059b9e0(param_1,0xffffffff,0);
    FUN_0059b9e0(param_2,0xffffffff,0);
    if ((((*(byte *)(param_1 + 0xea) & 0x10) == 0) && ((*(byte *)(param_2 + 0xea) & 0x10) == 0)) &&
       (iVar1 = thunk_FUN_00713570(param_1 + 0x138,param_2 + 0x138,0x14), iVar1 != 0)) {
      uVar2 = iVar1 >> 0x1f | 1;
    }
    else if (*(int *)(param_1 + 0x80) == 0) {
      uVar2 = 0;
      if (*(int *)(param_2 + 0x80) == 0) {
        uVar2 = 0xffffffff;
        if ((*(long *)(param_2 + 0x78) <= *(long *)(param_1 + 0x78)) &&
           (uVar2 = 1, *(long *)(param_1 + 0x78) <= *(long *)(param_2 + 0x78))) {
          iVar1 = thunk_FUN_00713570(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x70)
                                    );
          uVar2 = (uint)(0 < iVar1);
          if (iVar1 < 0) {
            uVar2 = 0xffffffff;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}

