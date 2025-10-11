
undefined4 *
FUN_00612790(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            long param_5,int param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  
  if (param_5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x205,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0x7c,0);
    return (undefined4 *)0x0;
  }
  puVar8 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (puVar8 = (undefined4 *)FUN_0060e6d0(), puVar8 == (undefined4 *)0x0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x20e,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0xc0100,0);
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    lVar5 = thunk_FUN_00712710(param_5,0x3b);
    if (lVar5 != 0) {
      lVar4 = FUN_0060e5f0();
      *(long *)(puVar8 + 2) = lVar4;
      if (lVar4 != 0) {
        FUN_004a7f30(*(undefined8 *)(lVar4 + 8));
        lVar4 = *(long *)(puVar8 + 2);
        lVar6 = FUN_00615fe0(lVar5 + 1,param_3);
        *(long *)(lVar4 + 8) = lVar6;
        if ((lVar6 != 0) &&
           (lVar5 = FUN_0041c400(param_5,(long)((int)lVar5 - (int)param_5),"../crypto/x509/v3_san.c"
                                 ,0x290), lVar5 != 0)) {
          puVar1 = *(undefined8 **)(puVar8 + 2);
          uVar7 = FUN_00424530(lVar5,0);
          *puVar1 = uVar7;
          FUN_0041ad60(lVar5,"../crypto/x509/v3_san.c",0x294);
          if (**(long **)(puVar8 + 2) != 0) goto LAB_00612818;
        }
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x23b,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0x93,0);
    break;
  case 1:
  case 2:
  case 6:
    lVar5 = FUN_004a7a60();
    *(long *)(puVar8 + 2) = lVar5;
    if (lVar5 != 0) {
      uVar2 = thunk_FUN_007129d0(param_5);
      iVar3 = FUN_004a1fa0(lVar5,param_5,uVar2);
      if (iVar3 != 0) goto LAB_00612818;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x248,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0xc0100,0);
    break;
  default:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x240,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0xa7,0);
    break;
  case 4:
    lVar5 = FUN_005ad560();
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0061dcb0(param_3,param_5);
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_san.c",0x2a4,"do_dirname");
        FUN_0051f8f0(0x22,0x96,"section=%s",param_5);
      }
      else {
        iVar3 = FUN_0059e2f0(lVar5,lVar4,0x1001);
        if (iVar3 != 0) {
          *(long *)(puVar8 + 2) = lVar5;
          FUN_0061dd50(param_3,lVar4);
          goto LAB_00612818;
        }
      }
    }
    FUN_005ad580(lVar5);
    FUN_0061dd50(param_3,lVar4);
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x234,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0x95,0);
    break;
  case 7:
    if (param_6 == 0) {
      lVar5 = FUN_0059e130(param_5);
    }
    else {
      lVar5 = FUN_0059e1c0();
    }
    *(long *)(puVar8 + 2) = lVar5;
    if (lVar5 != 0) {
LAB_00612818:
      *puVar8 = param_4;
      return puVar8;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x22c,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0x76,"value=%s",param_5);
    break;
  case 8:
    lVar5 = FUN_00424530(param_5,0);
    if (lVar5 != 0) {
      *(long *)(puVar8 + 2) = lVar5;
      goto LAB_00612818;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x21e,"a2i_GENERAL_NAME");
    FUN_0051f8f0(0x22,0x77,"value=%s",param_5);
  }
  if (param_1 == (undefined4 *)0x0) {
    FUN_0060e6f0(puVar8);
  }
  return (undefined4 *)0x0;
}

