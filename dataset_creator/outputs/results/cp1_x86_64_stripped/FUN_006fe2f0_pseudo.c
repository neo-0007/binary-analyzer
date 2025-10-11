
undefined1 *
FUN_006fe2f0(long param_1,undefined1 *param_2,ulong param_3,int param_4,int param_5,
            undefined4 *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  }
  puVar6 = param_2;
  if (param_3 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    do {
      while( true ) {
        lVar1 = *(long *)(param_1 + 8);
        uVar4 = *(long *)(param_1 + 0x10) - lVar1;
        if (0 < (long)uVar4) break;
        iVar2 = FUN_007067b0(param_1);
        if (iVar2 == -1) {
          if (param_6 == (undefined4 *)0x0) {
            return puVar6 + -(long)param_2;
          }
          *param_6 = 0xffffffff;
          return puVar6 + -(long)param_2;
        }
        if (param_4 == iVar2) {
          if (param_5 < 1) {
            if (param_5 != 0) {
              FUN_007075f0(param_1,param_4);
            }
          }
          else {
            *puVar6 = (char)param_4;
            puVar6 = puVar6 + 1;
          }
          goto LAB_006fe3c0;
        }
        param_3 = param_3 - 1;
        *puVar6 = (char)iVar2;
        puVar6 = puVar6 + 1;
        if (param_3 == 0) goto LAB_006fe3c0;
      }
      if (param_3 < uVar4) {
        uVar4 = param_3;
      }
      lVar3 = thunk_FUN_007134f0(lVar1,param_4,uVar4);
      if (lVar3 != 0) {
        lVar5 = lVar3 - lVar1;
        if (-1 < param_5) {
          lVar3 = lVar3 + 1;
          lVar5 = (lVar5 + 1) - (ulong)(param_5 == 0);
        }
        thunk_FUN_00713a50(puVar6,lVar1,lVar5);
        *(long *)(param_1 + 8) = lVar3;
        return puVar6 + (lVar5 - (long)param_2);
      }
      param_3 = param_3 - uVar4;
      thunk_FUN_00713a50(puVar6,lVar1,uVar4);
      puVar6 = puVar6 + uVar4;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar4;
    } while (param_3 != 0);
LAB_006fe3c0:
    puVar6 = puVar6 + -(long)param_2;
  }
  return puVar6;
}

