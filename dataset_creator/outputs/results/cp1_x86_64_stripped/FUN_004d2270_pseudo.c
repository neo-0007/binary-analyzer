
undefined8 FUN_004d2270(undefined8 param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_2 + 8);
  if (param_4 == 2) {
    lVar7 = *(long *)(param_2 + 0x78);
    lVar4 = *(long *)(param_2 + 0x70);
    if (((lVar1 == 0) || (lVar7 == 0)) || (lVar4 == 0)) goto LAB_004d2356;
    pcVar5 = "DH Private-Key";
LAB_004d22ad:
    iVar2 = FUN_004abce0(param_1,param_3,0x80);
    if (iVar2 != 0) {
      uVar3 = FUN_004d5ef0(param_2);
      iVar2 = FUN_004ae9e0(param_1,"%s: (%d bit)\n",pcVar5,uVar3);
      if (0 < iVar2) {
        param_3 = param_3 + 4;
        iVar2 = FUN_005bc920(param_1,"private-key:",lVar7,0,param_3);
        if ((((iVar2 != 0) &&
             (iVar2 = FUN_005bc920(param_1,"public-key:",lVar4,0,param_3), iVar2 != 0)) &&
            (iVar2 = FUN_00542570(param_1,param_2 + 8,param_3), iVar2 != 0)) &&
           ((*(int *)(param_2 + 0x68) == 0 ||
            ((iVar2 = FUN_004abce0(param_1,param_3,0x80), iVar2 != 0 &&
             (iVar2 = FUN_004ae9e0(param_1,"recommended-private-length: %d bits\n",
                                   *(undefined4 *)(param_2 + 0x68)), 0 < iVar2)))))) {
          return 1;
        }
      }
    }
    uVar6 = 0x80007;
  }
  else {
    if (param_4 == 0) {
      if (lVar1 != 0) {
        lVar4 = 0;
LAB_004d22a3:
        lVar7 = 0;
        pcVar5 = "DH Parameters";
        goto LAB_004d22ad;
      }
    }
    else {
      lVar4 = *(long *)(param_2 + 0x70);
      if (lVar1 != 0) {
        if ((lVar4 == 0) && (uVar6 = 0xc0102, 0 < param_4)) goto LAB_004d22ca;
        lVar7 = 0;
        pcVar5 = "DH Public-Key";
        if (param_4 == 1) goto LAB_004d22ad;
        goto LAB_004d22a3;
      }
    }
LAB_004d2356:
    uVar6 = 0xc0102;
  }
LAB_004d22ca:
  FUN_0051f420();
  FUN_0051f540("../crypto/dh/dh_ameth.c",0x125,"do_dh_print");
  FUN_0051f8f0(5,uVar6,0);
  return 0;
}

