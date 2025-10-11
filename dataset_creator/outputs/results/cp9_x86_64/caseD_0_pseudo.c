
void switchD_0060f172::caseD_0(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  long unaff_RBX;
  BIO *unaff_RBP;
  
  iVar3 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_2 + 8));
  if (iVar3 == 0x4ba) {
    piVar1 = *(int **)(*(long *)(unaff_RBX + 8) + 8);
    if (*piVar1 == 0x16) {
      puVar2 = *(uint **)(piVar1 + 2);
      BIO_printf(unaff_RBP,"othername:SRVName:%.*s",(ulong)*puVar2,*(undefined8 *)(puVar2 + 2));
      FUN_0060f1c0();
      return;
    }
  }
  else {
    piVar1 = *(int **)(*(long *)(unaff_RBX + 8) + 8);
    if (*piVar1 == 0xc) {
      if (iVar3 == 0x4b9) {
        BIO_printf(unaff_RBP,"othername:XmppAddr:%.*s",(ulong)**(uint **)(piVar1 + 2),
                   *(undefined8 *)(*(uint **)(piVar1 + 2) + 2));
        FUN_0060f1c0();
        return;
      }
      if (iVar3 < 0x4ba) {
        if (iVar3 == 0x289) {
          BIO_printf(unaff_RBP,"othername:UPN:%.*s",(ulong)**(uint **)(piVar1 + 2),
                     *(undefined8 *)(*(uint **)(piVar1 + 2) + 2));
          FUN_0060f1c0();
          return;
        }
        if (iVar3 == 0x4b8) {
          BIO_printf(unaff_RBP,"othername:SmtpUTF8Mailbox:%.*s",(ulong)**(uint **)(piVar1 + 2),
                     *(undefined8 *)(*(uint **)(piVar1 + 2) + 2));
          FUN_0060f1c0();
          return;
        }
      }
      else if (iVar3 == 0x4bb) {
        BIO_printf(unaff_RBP,"othername:NAIRealm:%.*s",(ulong)**(uint **)(piVar1 + 2),
                   *(undefined8 *)(*(uint **)(piVar1 + 2) + 2));
        FUN_0060f1c0();
        return;
      }
      BIO_printf(unaff_RBP,"othername:<unsupported>");
      FUN_0060f1c0();
      return;
    }
  }
  BIO_printf(unaff_RBP,"othername:<unsupported>");
  FUN_0060f1c0();
  return;
}

