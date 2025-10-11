
long FUN_006c7df0(long *param_1,long *param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  
  pbVar6 = (byte *)param_1[2];
  pbVar5 = (byte *)param_1[3];
  *param_3 = 1;
  if (pbVar6 < pbVar5) {
    uVar1 = (uint)*pbVar6;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x48))();
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    pbVar5 = (byte *)param_1[3];
    pbVar6 = (byte *)param_1[2];
  }
  lVar7 = 0;
LAB_006c7e1f:
  lVar4 = (long)pbVar5 - (long)pbVar6;
  if (lVar4 < 2) goto LAB_006c7e60;
  do {
    lVar3 = (**(code **)(*param_2 + 0x60))(param_2,pbVar6,lVar4);
    param_1[2] = param_1[2] + lVar3;
    lVar7 = lVar7 + lVar3;
    if (lVar3 < lVar4) {
LAB_006c7ea9:
      *param_3 = 0;
      return lVar7;
    }
    while( true ) {
      uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (uVar1 == 0xffffffff) {
        return lVar7;
      }
      pbVar6 = (byte *)param_1[2];
      lVar4 = param_1[3] - (long)pbVar6;
      if (1 < lVar4) break;
LAB_006c7e60:
      if ((undefined1 *)param_2[5] < (undefined1 *)param_2[6]) {
        *(undefined1 *)param_2[5] = (char)uVar1;
        param_2[5] = param_2[5] + 1;
      }
      else {
        iVar2 = (**(code **)(*param_2 + 0x68))(param_2,uVar1 & 0xff);
        if (iVar2 == -1) goto LAB_006c7ea9;
      }
      pbVar5 = (byte *)param_1[3];
      lVar7 = lVar7 + 1;
      if ((byte *)param_1[2] < pbVar5) {
        pbVar6 = (byte *)param_1[2] + 1;
        param_1[2] = (long)pbVar6;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar2 == -1) {
          return lVar7;
        }
        pbVar6 = (byte *)param_1[2];
        pbVar5 = (byte *)param_1[3];
      }
      if (pbVar6 < pbVar5) {
        uVar1 = (uint)*pbVar6;
        goto LAB_006c7e1f;
      }
    }
  } while( true );
}

