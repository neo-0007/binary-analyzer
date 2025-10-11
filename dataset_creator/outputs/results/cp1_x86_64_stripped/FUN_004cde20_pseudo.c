
undefined8
FUN_004cde20(byte *param_1,undefined4 param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  
  if (param_1 == (byte *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/conf/conf_mod.c",0x245,"CONF_parse_list");
    FUN_0051f8f0(0xe,0x73,0);
    return 0;
  }
  do {
    if (param_3 == 0) {
LAB_004cde50:
      pbVar4 = (byte *)thunk_FUN_00712710(param_1,param_2);
      if ((param_1 == pbVar4) || (*param_1 == 0)) goto LAB_004cded2;
      pbVar7 = pbVar4 + -1;
      if (pbVar4 == (byte *)0x0) {
        lVar6 = thunk_FUN_007129d0(param_1);
        pbVar7 = param_1 + lVar6 + -1;
      }
      if (param_3 != 0) {
        plVar3 = (long *)FUN_006e2270();
        while ((*(byte *)(*plVar3 + 1 + (ulong)*pbVar7 * 2) & 0x20) != 0) {
          pbVar7 = pbVar7 + -1;
        }
      }
      uVar5 = (*param_4)(param_1,((int)pbVar7 - (int)param_1) + 1,param_5);
      iVar2 = (int)uVar5;
    }
    else {
      bVar1 = *param_1;
      if (bVar1 != 0) {
        plVar3 = (long *)FUN_006e2270();
        do {
          if ((*(byte *)(*plVar3 + 1 + (ulong)bVar1 * 2) & 0x20) == 0) goto LAB_004cde50;
          bVar1 = param_1[1];
          param_1 = param_1 + 1;
        } while (bVar1 != 0);
      }
      pbVar4 = (byte *)thunk_FUN_00712710(param_1,param_2);
LAB_004cded2:
      uVar5 = (*param_4)(0,0,param_5);
      iVar2 = (int)uVar5;
    }
    if (iVar2 < 1) {
      return uVar5;
    }
    if (pbVar4 == (byte *)0x0) {
      return 1;
    }
    param_1 = pbVar4 + 1;
  } while( true );
}

