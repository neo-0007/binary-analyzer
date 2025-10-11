
undefined8 ERR_clear_last_mark(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar2 = ossl_err_get_state_int();
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x380);
    iVar1 = *(int *)(lVar2 + 900);
    if (iVar3 != iVar1) {
      do {
        lVar5 = (long)iVar3;
        iVar4 = *(int *)(lVar2 + 0x40 + lVar5 * 4);
        if (iVar4 != 0) goto LAB_00511265;
        if (iVar3 < 1) {
          if (iVar1 == 0xf) {
            return 0;
          }
          iVar4 = *(int *)(lVar2 + 0x7c);
          if (iVar4 != 0) {
            lVar5 = 0xf;
LAB_00511265:
            *(int *)(lVar2 + 0x40 + lVar5 * 4) = iVar4 + -1;
            return 1;
          }
          if (iVar1 == 0xe) {
            return 0;
          }
          iVar4 = *(int *)(lVar2 + 0x78);
          if (iVar4 != 0) {
            lVar5 = 0xe;
            goto LAB_00511265;
          }
          iVar3 = 0xe;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 == iVar1) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

