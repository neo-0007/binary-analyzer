
ulong FUN_00612440(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *param_2;
  switch(uVar1) {
  case 0:
    break;
  case 1:
    FUN_004ae9e0(param_1,"email:");
    FUN_005b55e0(param_1,*(undefined8 *)(param_2 + 2));
    return (ulong)uVar1;
  case 2:
    FUN_004ae9e0(param_1,&DAT_0081bd96);
    FUN_005b55e0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 3:
    FUN_004ae9e0(param_1,"X400Name:<unsupported>");
    return 1;
  case 4:
    FUN_004ae9e0(param_1,"DirName:");
    FUN_005b7150(param_1,*(undefined8 *)(param_2 + 2),0,"mIcSt11char_traitsIcESaIcEEE");
    return 1;
  case 5:
    FUN_004ae9e0(param_1,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    FUN_004ae9e0(param_1,&DAT_0081bd9b);
    FUN_005b55e0(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    lVar6 = FUN_0059ddb0(*(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2),
                         **(undefined4 **)(param_2 + 2));
    if (lVar6 != 0) {
      FUN_004ae9e0(param_1,"IP Address:%s",lVar6);
      FUN_0041ad60(lVar6,"../crypto/x509/v3_san.c",0x122);
    }
    return (ulong)(lVar6 != 0);
  case 8:
    FUN_004ae9e0(param_1,"Registered ID:");
    FUN_004a0450(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  default:
    uVar5 = FUN_006124c0();
    return uVar5;
  }
  iVar4 = FUN_00423da0(**(undefined8 **)(param_2 + 2));
  if (iVar4 == 0x4ba) {
    if (**(int **)(*(long *)(param_2 + 2) + 8) == 0x16) {
      puVar3 = *(undefined4 **)(*(int **)(*(long *)(param_2 + 2) + 8) + 2);
      FUN_004ae9e0(param_1,"othername:SRVName:%.*s",*puVar3,*(undefined8 *)(puVar3 + 2));
      uVar5 = FUN_006124c0();
      return uVar5;
    }
  }
  else {
    piVar2 = *(int **)(*(long *)(param_2 + 2) + 8);
    if (*piVar2 == 0xc) {
      if (iVar4 == 0x4b9) {
        FUN_004ae9e0(param_1,"othername:XmppAddr:%.*s",**(undefined4 **)(piVar2 + 2),
                     *(undefined8 *)(*(undefined4 **)(piVar2 + 2) + 2));
        uVar5 = FUN_006124c0();
        return uVar5;
      }
      if (iVar4 < 0x4ba) {
        if (iVar4 == 0x289) {
          FUN_004ae9e0(param_1,"othername:UPN:%.*s",**(undefined4 **)(piVar2 + 2),
                       *(undefined8 *)(*(undefined4 **)(piVar2 + 2) + 2));
          uVar5 = FUN_006124c0();
          return uVar5;
        }
        if (iVar4 == 0x4b8) {
          FUN_004ae9e0(param_1,"othername:SmtpUTF8Mailbox:%.*s",**(undefined4 **)(piVar2 + 2),
                       *(undefined8 *)(*(undefined4 **)(piVar2 + 2) + 2));
          uVar5 = FUN_006124c0();
          return uVar5;
        }
      }
      else if (iVar4 == 0x4bb) {
        FUN_004ae9e0(param_1,"othername:NAIRealm:%.*s",**(undefined4 **)(piVar2 + 2),
                     *(undefined8 *)(*(undefined4 **)(piVar2 + 2) + 2));
        uVar5 = FUN_006124c0();
        return uVar5;
      }
      FUN_004ae9e0(param_1,"othername:<unsupported>");
      uVar5 = FUN_006124c0();
      return uVar5;
    }
  }
  FUN_004ae9e0(param_1,"othername:<unsupported>");
  uVar5 = FUN_006124c0();
  return uVar5;
}

