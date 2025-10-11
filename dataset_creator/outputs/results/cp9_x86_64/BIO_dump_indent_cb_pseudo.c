
int BIO_dump_indent_cb(cb *cb,void *u,char *s,int len,int indent)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  size_t len_00;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_19c;
  uint local_198;
  int local_17c;
  char local_168 [296];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0x40;
  if (indent < 0x41) {
    uVar2 = indent;
  }
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = 6;
  if ((int)uVar3 < 7) {
    uVar2 = uVar3;
  }
  iVar4 = (uVar3 - uVar2) + 3;
  iVar7 = (uVar3 - uVar2) + 6;
  if (-1 < iVar4) {
    iVar7 = iVar4;
  }
  iVar4 = -(iVar7 >> 2) + 0x10;
  iVar11 = len / iVar4 + (uint)(iVar4 * (len / iVar4) < len);
  if (iVar11 < 1) {
    iVar5 = 0;
  }
  else {
    local_19c = 0;
    uVar6 = 0;
    local_198 = len - 1;
    local_17c = 0;
    do {
      iVar5 = BIO_snprintf(local_168,0x121,"%*s%04x - ",(ulong)uVar3,&DAT_008343a2,uVar6);
      iVar13 = (int)uVar6;
      if (iVar4 == 0) {
        len_00 = (size_t)iVar5;
        uVar6 = 0x121 - len_00;
        if (2 < uVar6) {
          pcVar9 = local_168 + len_00;
          iVar5 = iVar5 + 2;
          pcVar9[0] = ' ';
          pcVar9[1] = ' ';
          local_168[len_00 + 2] = '\0';
          len_00 = (size_t)iVar5;
          uVar6 = 0x121 - len_00;
        }
      }
      else {
        sVar8 = (size_t)iVar5;
        uVar14 = 0;
        do {
          uVar6 = 0x121 - sVar8;
          if (3 < uVar6) {
            if (iVar13 + (int)uVar14 < len) {
              uVar12 = 0x20;
              if (uVar14 == 7) {
                uVar12 = 0x2d;
              }
              BIO_snprintf(local_168 + sVar8,4,"%02x%c",(ulong)(byte)s[uVar14],uVar12);
            }
            else {
              builtin_strncpy(local_168 + sVar8,"   ",4);
            }
            iVar5 = iVar5 + 3;
            sVar8 = (size_t)iVar5;
            uVar6 = 0x121 - sVar8;
          }
          bVar15 = -(iVar7 >> 2) + 0xf != uVar14;
          uVar14 = uVar14 + 1;
        } while (bVar15);
        if (2 < uVar6) {
          pcVar9 = local_168 + sVar8;
          iVar5 = iVar5 + 2;
          pcVar9[0] = ' ';
          pcVar9[1] = ' ';
          local_168[sVar8 + 2] = '\0';
          sVar8 = (size_t)iVar5;
          uVar6 = 0x121 - sVar8;
        }
        len_00 = sVar8;
        if (iVar13 < len) {
          lVar10 = 1;
          while( true ) {
            uVar6 = 0x121 - sVar8;
            len_00 = sVar8;
            if (1 < uVar6) {
              cVar1 = s[lVar10 + -1];
              if (0x5e < (byte)(s[lVar10 + -1] - 0x20U)) {
                cVar1 = '.';
              }
              iVar5 = iVar5 + 1;
              len_00 = (size_t)iVar5;
              local_168[sVar8] = cVar1;
              local_168[len_00] = '\0';
              uVar6 = 0x121 - len_00;
            }
            if ((iVar4 <= (int)lVar10) || (lVar10 = lVar10 + 1, (ulong)local_198 + 2 == lVar10))
            break;
            sVar8 = (size_t)iVar5;
          }
        }
      }
      if (1 < uVar6) {
        len_00 = (size_t)(iVar5 + 1);
        local_168[iVar5] = '\n';
        local_168[len_00] = '\0';
      }
      iVar5 = (*cb)(local_168,len_00,u);
      if (iVar5 < 0) break;
      iVar5 = local_17c + iVar5;
      uVar6 = (ulong)(uint)(iVar13 + iVar4);
      s = s + iVar4;
      local_19c = local_19c + 1;
      local_198 = local_198 - iVar4;
      local_17c = iVar5;
    } while (iVar11 != local_19c);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar5;
}

