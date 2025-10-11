
long FUN_00613df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00436410();
  lVar7 = lVar2;
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_tlsf.c",99,"v2i_TLS_FEATURE");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    while( true ) {
      iVar1 = FUN_00436480(param_3);
      if (iVar1 <= iVar5) break;
      lVar4 = FUN_004364a0(param_3,iVar5);
      pcVar8 = *(char **)(lVar4 + 0x10);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = *(char **)(lVar4 + 8);
        iVar1 = FUN_0041c9c0(pcVar8,"status_request");
        if (iVar1 == 0) goto LAB_00613f11;
LAB_00613e4b:
        iVar1 = FUN_0041c9c0(pcVar8,"status_request_v2");
        if (iVar1 == 0) {
          uVar6 = 0x11;
          goto LAB_00613e9b;
        }
        uVar6 = FUN_006e94d0(pcVar8,&local_48,10);
        if (((*local_48 == '\0') && (local_48 != pcVar8)) && (uVar6 < 0x10000)) goto LAB_00613e9b;
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_tlsf.c",0x77,"v2i_TLS_FEATURE");
        FUN_0051f8f0(0x22,0x8f,0);
        lVar3 = 0;
        FUN_0051ef40(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",*(undefined8 *)(lVar4 + 0x10));
LAB_00613f50:
        lVar7 = 0;
        FUN_00436430(lVar2,thunk_FUN_004a2270);
        thunk_FUN_004a2270(lVar3);
        break;
      }
      iVar1 = FUN_0041c9c0(pcVar8,"status_request");
      if (iVar1 != 0) goto LAB_00613e4b;
LAB_00613f11:
      uVar6 = 5;
LAB_00613e9b:
      lVar3 = FUN_004a7700();
      if (lVar3 == 0) {
LAB_00613f20:
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_tlsf.c",0x80,"v2i_TLS_FEATURE");
        FUN_0051f8f0(0x22,0xc0100,0);
        goto LAB_00613f50;
      }
      iVar1 = thunk_FUN_0049f880(lVar3,uVar6);
      if (iVar1 == 0) goto LAB_00613f20;
      iVar1 = FUN_00435f80(lVar2,lVar3);
      if (iVar1 < 1) goto LAB_00613f20;
      iVar5 = iVar5 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

