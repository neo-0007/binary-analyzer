
int UI_process(UI *ui)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((*(code **)(*(long *)ui + 8) != (code *)0x0) &&
     (iVar2 = (**(code **)(*(long *)ui + 8))(), iVar2 < 1)) {
    pcVar5 = "opening session";
LAB_00582e87:
    pcVar1 = *(code **)(*(long *)ui + 0x28);
joined_r0x00582e6b:
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(ui);
    }
    goto LAB_00582e99;
  }
  if (((byte)ui[0x29] & 1) != 0) {
    ERR_print_errors_cb(print_error,ui);
  }
  uVar4 = *(undefined8 *)(ui + 8);
  iVar2 = 0;
  while( true ) {
    iVar3 = OPENSSL_sk_num(uVar4);
    if (iVar3 <= iVar2) break;
    pcVar1 = *(code **)(*(long *)ui + 0x10);
    uVar4 = *(undefined8 *)(ui + 8);
    if (pcVar1 != (code *)0x0) {
      uVar4 = OPENSSL_sk_value(uVar4,iVar2);
      iVar3 = (*pcVar1)(ui,uVar4);
      if (iVar3 < 1) {
        pcVar5 = "writing strings";
        goto LAB_00582e87;
      }
      uVar4 = *(undefined8 *)(ui + 8);
    }
    iVar2 = iVar2 + 1;
  }
  pcVar1 = *(code **)(*(long *)ui + 0x18);
  if (pcVar1 == (code *)0x0) {
LAB_00582e18:
    uVar4 = *(undefined8 *)(ui + 8);
    for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar4), iVar2 < iVar3; iVar2 = iVar2 + 1) {
      uVar4 = *(undefined8 *)(ui + 8);
      pcVar1 = *(code **)(*(long *)ui + 0x20);
      if (pcVar1 != (code *)0x0) {
        uVar4 = OPENSSL_sk_value(uVar4,iVar2);
        iVar3 = (*pcVar1)(ui,uVar4);
        if (iVar3 == -1) goto LAB_00582f00;
        if (iVar3 == 0) {
          pcVar5 = "reading strings";
          goto LAB_00582e60;
        }
        uVar4 = *(undefined8 *)(ui + 8);
      }
    }
    pcVar5 = (char *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = (*pcVar1)(ui);
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        pcVar5 = "flushing";
LAB_00582e60:
        pcVar1 = *(code **)(*(long *)ui + 0x28);
        goto joined_r0x00582e6b;
      }
      goto LAB_00582e18;
    }
LAB_00582f00:
    *(uint *)(ui + 0x28) = *(uint *)(ui + 0x28) & 0xfffffffe;
    pcVar5 = "processing";
    iVar2 = -2;
  }
  if (*(code **)(*(long *)ui + 0x28) == (code *)0x0) {
    return iVar2;
  }
  iVar3 = (**(code **)(*(long *)ui + 0x28))(ui);
  if (0 < iVar3) {
    return iVar2;
  }
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "closing session";
  }
LAB_00582e99:
  ERR_new();
  ERR_set_debug("../crypto/ui/ui_lib.c",0x220,"UI_process");
  ERR_set_error(0x28,0x6b,"while %s",pcVar5);
  return -1;
}

