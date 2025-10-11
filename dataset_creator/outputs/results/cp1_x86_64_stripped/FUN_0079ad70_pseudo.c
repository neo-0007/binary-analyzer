
ulong FUN_0079ad70(undefined8 param_1,ulong param_2,ulong param_3,char *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  iVar5 = (int)*param_4;
  if ((byte)(*param_4 - 1U) < 0x7e) {
    pbVar7 = (byte *)(param_4 + 1);
    uVar3 = thunk_FUN_00713610(param_1,param_2,param_3 - param_2);
    uVar4 = uVar3 + (param_3 - param_2);
    param_2 = param_3;
    while (uVar6 = param_2, uVar3 < uVar4) {
      while( true ) {
        puVar1 = (undefined4 *)(uVar4 - 4);
        uVar4 = uVar4 - 4;
        param_2 = uVar6 - 4;
        *(undefined4 *)(uVar6 - 4) = *puVar1;
        iVar5 = iVar5 + -1;
        if (iVar5 != 0) break;
        if (uVar4 <= uVar3) {
          return param_2;
        }
        if (uVar4 == param_2) {
LAB_0079ae20:
          uVar4 = thunk_FUN_00713610(param_2 - (uVar4 - uVar3),uVar3);
          return uVar4;
        }
        *(undefined4 *)(uVar6 - 8) = param_5;
        bVar2 = *pbVar7;
        iVar5 = (int)(char)bVar2;
        param_2 = uVar6 - 8;
        if (0x7e < bVar2) goto LAB_0079ae20;
        uVar6 = param_2;
        if (bVar2 == 0) {
          iVar5 = (int)(char)pbVar7[-1];
        }
        else {
          pbVar7 = pbVar7 + 1;
        }
      }
    }
  }
  return param_2;
}

