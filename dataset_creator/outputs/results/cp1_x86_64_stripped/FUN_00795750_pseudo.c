
undefined1 *
FUN_00795750(ulong param_1,undefined1 *param_2,undefined1 *param_3,char *param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  
  iVar8 = (int)*param_4;
  if ((byte)(*param_4 - 1U) < 0x7e) {
    iVar3 = thunk_FUN_007129d0(param_5);
    pbVar7 = (byte *)(param_4 + 1);
    thunk_FUN_00713610(param_1,param_2,(long)param_3 - (long)param_2);
    uVar4 = param_1 + ((long)param_3 - (long)param_2);
    param_2 = param_3;
    if (param_1 < uVar4) {
LAB_007957d0:
      do {
        uVar1 = uVar4 - 1;
        param_2 = param_3 + -1;
        param_3[-1] = *(undefined1 *)(uVar4 - 1);
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          if (uVar1 <= param_1) {
            return param_2;
          }
          lVar5 = (long)iVar3;
          if ((long)iVar3 < (long)((long)param_3 - uVar4)) {
            do {
              lVar6 = lVar5 + -1;
              param_2 = param_2 + -1;
              *param_2 = *(undefined1 *)(param_5 + -1 + lVar5);
              lVar5 = lVar6;
            } while (0 < (int)lVar6);
            bVar2 = *pbVar7;
            iVar8 = (int)(char)bVar2;
            if (bVar2 < 0x7f) {
              param_3 = param_2;
              if (bVar2 == 0) {
                iVar8 = (int)(char)pbVar7[-1];
                uVar4 = uVar1;
              }
              else {
                pbVar7 = pbVar7 + 1;
                uVar4 = uVar1;
              }
              goto LAB_007957d0;
            }
          }
          thunk_FUN_00713610(param_2 + -(uVar1 - param_1),param_1);
          return param_2 + -(uVar1 - param_1);
        }
        uVar4 = uVar1;
        param_3 = param_2;
      } while (param_1 < uVar1);
    }
  }
  return param_2;
}

