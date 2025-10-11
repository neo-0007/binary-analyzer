
long FUN_00600d40(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  undefined1 auStack_e8 [200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/http/http_client.c",0x3f7,"OSSL_HTTP_exchange");
    FUN_0051f8f0(0x3d,0xc0102,0);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    lVar3 = FUN_00600440(param_1);
    if (lVar3 == 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar5 = FUN_0051e920();
        if (((uVar5 & 0x80000000) == 0) &&
           ((((uVar8 = (uint)(uVar5 >> 0x17) & 0xff, (char)(uVar5 >> 0x17) == '\x14' ||
              (uVar8 == 0x3d)) ||
             ((uVar2 = (uint)uVar5 & 0x7fffff, uVar2 == 0x67 || uVar2 == 0x93 && (uVar8 == 0x20))))
            || ((uVar8 == 0x3a && (uVar2 == 0x93)))))) {
          if (*(long *)(param_1 + 0x48) != 0) {
            pcVar7 = *(char **)(param_1 + 0x50);
            pcVar9 = ":";
            if (pcVar7 == (char *)0x0) {
              pcVar7 = "";
              pcVar9 = pcVar7;
            }
            puVar6 = &DAT_007e3d62;
            if (*(int *)(param_1 + 0x38) == 0) {
              puVar6 = &DAT_0083e5c2;
            }
            FUN_004aeb30(auStack_e8,200,"server=http%s://%s%s%s",puVar6,*(long *)(param_1 + 0x48),
                         pcVar9,pcVar7);
            FUN_0051ef40(1,auStack_e8);
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            FUN_0051ef40(2," proxy=");
          }
          if (uVar5 == 0) {
            pcVar7 = " violating the protocol";
            if (*(int *)(param_1 + 0x38) == 0) {
              pcVar7 = ", likely because it requires the use of TLS";
            }
            FUN_004aeb30(auStack_e8,200," peer has disconnected%s",pcVar7);
            FUN_0051ef40(1,auStack_e8);
          }
        }
        lVar3 = 0;
      }
      else if (param_2 == (undefined8 *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/http/http_client.c",0x402,"OSSL_HTTP_exchange");
        FUN_0051f8f0(0x3d,0x74,0);
      }
      else {
        uVar4 = FUN_0041c2c0(*(long *)(param_1 + 0xb8),"../crypto/http/http_client.c",0x405);
        *param_2 = uVar4;
      }
    }
    else {
      iVar1 = FUN_004ab6a0(lVar3);
      if (iVar1 == 0) {
        lVar3 = 0;
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

