
int FUN_00599880(int param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long extraout_RDX;
  undefined *puVar7;
  long extraout_RDX_00;
  long extraout_RDX_01;
  int iVar8;
  undefined1 auVar9 [16];
  
  if (param_1 != 0) {
    return param_1;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_005a7770(param_2);
  uVar3 = FUN_005c0c00();
  uVar3 = FUN_004ab550(uVar3);
  uVar4 = FUN_005a1ef0((long)iVar1);
  uVar2 = FUN_005a7790(param_2);
  lVar5 = FUN_005a7820(param_2);
  pcVar6 = "CRL path validation";
  if (lVar5 == 0) {
    pcVar6 = "Certificate verification";
  }
  FUN_004ae9e0(uVar3,"%s at depth = %d error = %d (%s)\n",pcVar6,uVar2,iVar1,uVar4);
  uVar4 = FUN_005a0ea0(param_2);
  uVar4 = FUN_005a0cf0(uVar4);
  if (iVar1 == 0x3f) {
    lVar5 = FUN_005a8f50(uVar4);
    if (lVar5 != 0) {
      FUN_004ae9e0(uVar3,"Expected email address = %s\n",lVar5);
      lVar5 = extraout_RDX;
    }
LAB_00599ad0:
    FUN_004ae9e0(uVar3,"Failure for:\n",lVar5);
    uVar4 = FUN_005a77b0(param_2);
    FUN_00599650(uVar3,uVar4,0x100);
LAB_00599a68:
    if ((iVar1 != 2) &&
       ((0x33 < iVar1 - 0x13U || ((0x8000000004003U >> ((ulong)(iVar1 - 0x13U) & 0x3f) & 1) == 0))))
    goto LAB_005999f4;
  }
  else {
    if (iVar1 == 0x40) {
      lVar5 = FUN_005a8f80(uVar4);
      if (lVar5 != 0) {
        FUN_004ae9e0(uVar3,"Expected IP address = %s\n",lVar5);
      }
      FUN_0041ad60(lVar5,"../crypto/x509/t_x509.c",0x1f5);
      lVar5 = extraout_RDX_01;
      goto LAB_00599ad0;
    }
    if (iVar1 == 0x3e) {
      FUN_004ae9e0(uVar3);
      iVar8 = 0;
      while( true ) {
        iVar8 = iVar8 + 1;
        auVar9 = FUN_005a8e60(uVar4);
        if (auVar9._0_8_ == 0) break;
        puVar7 = &DAT_00801fb4;
        if (iVar8 == 1) {
          puVar7 = &DAT_0083e5c2;
        }
        FUN_004ae9e0(uVar3,"%s%s",puVar7,auVar9._0_8_);
      }
      FUN_004ae9e0(uVar3,&DAT_008243ea,auVar9._8_8_,0);
      lVar5 = extraout_RDX_00;
      goto LAB_00599ad0;
    }
    FUN_004ae9e0(uVar3,"Failure for:\n");
    uVar4 = FUN_005a77b0(param_2);
    FUN_00599650(uVar3,uVar4,0x100);
    if ((iVar1 != 0x1b) && (iVar1 != 0x12)) goto LAB_00599a68;
  }
  FUN_004ae9e0(uVar3,"Non-trusted certs:\n");
  uVar4 = FUN_005a80b0(param_2);
  FUN_005997d0(uVar3,uVar4);
  FUN_004ae9e0(uVar3,"Certs in trust store:\n");
  lVar5 = FUN_005a0ea0(param_2);
  if (lVar5 == 0) {
    FUN_004ae9e0(uVar3,"    (no trusted store)\n");
  }
  else {
    uVar4 = FUN_005a02a0(lVar5);
    FUN_005997d0(uVar3,uVar4);
    FUN_00436430(uVar4,FUN_005b0200);
  }
LAB_005999f4:
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/t_x509.c",0x20b,"X509_STORE_CTX_print_verify_cb");
  FUN_0051f8f0(0xb,0x8b,0);
  FUN_005fbd40(&DAT_008243ea,uVar3);
  FUN_004ab560(uVar3);
  return 0;
}

