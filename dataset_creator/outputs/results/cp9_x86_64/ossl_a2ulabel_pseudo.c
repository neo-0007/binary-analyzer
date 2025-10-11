
ulong ossl_a2ulabel(char *param_1,byte *param_2,ulong *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_84c;
  uint local_848;
  uint auStack_844 [511];
  byte local_46 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (byte *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *param_3;
  }
  uVar11 = (ulong)(param_2 != (byte *)0x0);
  uVar8 = 0;
  do {
    pcVar4 = strchr(param_1,0x2e);
    iVar3 = strncmp(param_1,"xn--",4);
    if (pcVar4 == (char *)0x0) {
      sVar5 = strlen(param_1);
      uVar6 = sVar5 + 1;
      if (iVar3 == 0) goto LAB_0061ab60;
LAB_0061aaf6:
      uVar7 = 0;
      uVar9 = uVar8;
      pbVar12 = param_2;
      do {
        while( true ) {
          uVar8 = uVar9 + 1;
          if (uVar13 <= uVar9) break;
          param_2 = pbVar12 + 1;
          *pbVar12 = param_1[uVar7];
          uVar7 = (ulong)((int)uVar7 + 1);
          uVar9 = uVar8;
          pbVar12 = param_2;
          if (uVar6 <= uVar7) goto joined_r0x0061ac8a;
        }
        uVar7 = (ulong)((int)uVar7 + 1);
        uVar11 = 0;
        uVar9 = uVar8;
        param_2 = pbVar12;
      } while (uVar7 < uVar6);
joined_r0x0061ac8a:
      if (pcVar4 == (char *)0x0) {
        *param_3 = uVar8;
LAB_0061abdc:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail_local();
        }
        return uVar11;
      }
    }
    else {
      sVar5 = (long)pcVar4 - (long)param_1;
      if (iVar3 == 0) {
LAB_0061ab60:
        puVar10 = &local_848;
        local_84c = 0x200;
        iVar3 = ossl_punycode_decode(param_1 + 4,sVar5 - 4,puVar10,&local_84c);
        if (0 < iVar3) {
          if (local_84c != 0) {
            do {
              uVar1 = *puVar10;
              bVar2 = (byte)uVar1;
              if (uVar1 < 0x80) {
                local_46[0] = bVar2;
                uVar6 = 1;
                local_46[1] = 0;
              }
              else if (uVar1 < 0x800) {
                local_46[2] = 0;
                local_46[0] = (byte)(uVar1 >> 6) | 0xc0;
                uVar6 = 2;
                local_46[1] = bVar2 & 0x3f | 0x80;
              }
              else if (uVar1 < 0x10000) {
                local_46[3] = 0;
                local_46[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
                uVar6 = 3;
                local_46[0] = (byte)(uVar1 >> 0xc) | 0xe0;
                local_46[2] = bVar2 & 0x3f | 0x80;
              }
              else {
                if (0x10ffff < uVar1) goto LAB_0061abd6;
                local_46[4] = 0;
                local_46[0] = (byte)(uVar1 >> 0x12) | 0xf0;
                local_46[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
                uVar6 = 4;
                local_46[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
                local_46[3] = bVar2 & 0x3f | 0x80;
              }
              uVar7 = 0;
              uVar9 = uVar8;
              pbVar12 = param_2;
              do {
                while( true ) {
                  uVar8 = uVar9 + 1;
                  if (uVar13 <= uVar9) break;
                  param_2 = pbVar12 + 1;
                  *pbVar12 = local_46[uVar7];
                  uVar7 = (ulong)((int)uVar7 + 1);
                  uVar9 = uVar8;
                  pbVar12 = param_2;
                  if (uVar6 <= uVar7) goto LAB_0061ac67;
                }
                uVar7 = (ulong)((int)uVar7 + 1);
                uVar11 = 0;
                uVar9 = uVar8;
                param_2 = pbVar12;
              } while (uVar7 < uVar6);
LAB_0061ac67:
              puVar10 = puVar10 + 1;
            } while (auStack_844 + (local_84c - 1) != puVar10);
          }
          if (uVar8 < uVar13) {
            *param_2 = -(pcVar4 != (char *)0x0) & 0x2e;
            uVar8 = uVar8 + 1;
            param_2 = param_2 + 1;
          }
          else {
            uVar11 = 0;
            uVar8 = uVar8 + 1;
          }
          goto joined_r0x0061ac8a;
        }
LAB_0061abd6:
        uVar11 = 0xffffffff;
        goto LAB_0061abdc;
      }
      uVar6 = sVar5 + 1;
      if (uVar6 != 0) goto LAB_0061aaf6;
    }
    param_1 = pcVar4 + 1;
  } while( true );
}

