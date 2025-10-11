
undefined8 FUN_004e7640(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  if ((param_2 == 0) || (lVar3 = FUN_004ee2d0(param_2), lVar3 == 0)) {
    FUN_0051f420();
    uVar7 = 0;
    FUN_0051f540("../crypto/ec/ec_ameth.c",300,"do_EC_KEY_print");
    FUN_0051f8f0(0x10,0xc0102,0);
    goto LAB_004e77ad;
  }
  if (param_4 == 2) {
    lVar4 = 0;
    lVar5 = 0;
    pcVar6 = "ECDSA-Parameters";
LAB_004e76ad:
    iVar1 = FUN_004abce0(param_1,param_3,0x80);
    if (iVar1 == 0) goto LAB_004e7750;
    uVar2 = FUN_004ef7f0(lVar3);
    iVar1 = FUN_004ae9e0(param_1,"%s: (%d bit)\n",pcVar6,uVar2);
    if (((iVar1 < 1) ||
        ((lVar5 != 0 &&
         ((iVar1 = FUN_004ae9e0(param_1,"%*spriv:\n",param_3,&DAT_0083e5c2), iVar1 < 1 ||
          (iVar1 = FUN_005bc820(param_1,local_50,lVar5,param_3 + 4), iVar1 == 0)))))) ||
       ((lVar4 != 0 &&
        ((iVar1 = FUN_004ae9e0(param_1,"%*spub:\n",param_3,&DAT_0083e5c2), iVar1 < 1 ||
         (iVar1 = FUN_005bc820(param_1,local_48,lVar4,param_3 + 4), iVar1 == 0))))))
    goto LAB_004e7750;
    uVar7 = 1;
    iVar1 = FUN_004f7cc0(param_1,lVar3,param_3);
    if (iVar1 == 0) goto LAB_004e7750;
  }
  else {
    lVar4 = FUN_004ee3f0(param_2);
    if (lVar4 == 0) {
      lVar4 = 0;
LAB_004e780e:
      if (param_4 == 0) {
        lVar5 = FUN_004ee2e0(param_2);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_004eecb0(param_2,&local_50);
          if (lVar5 == 0) goto LAB_004e78e8;
        }
        pcVar6 = "Private-Key";
      }
      else {
        lVar5 = 0;
        pcVar6 = "Public-Key";
      }
      goto LAB_004e76ad;
    }
    uVar2 = FUN_004ee650(param_2);
    lVar4 = FUN_004ee960(param_2,uVar2,&local_48,0);
    if (lVar4 != 0) goto LAB_004e780e;
LAB_004e78e8:
    lVar5 = 0;
LAB_004e7750:
    FUN_0051f420();
    uVar7 = 0;
    FUN_0051f540("../crypto/ec/ec_ameth.c",0x15c,"do_EC_KEY_print");
    FUN_0051f8f0(0x10,0x80010,0);
  }
  FUN_0041aef0(local_50,lVar5,"../crypto/ec/ec_ameth.c",0x15d);
  FUN_0041ad60(local_48,"../crypto/ec/ec_ameth.c",0x15e);
LAB_004e77ad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar7;
}

