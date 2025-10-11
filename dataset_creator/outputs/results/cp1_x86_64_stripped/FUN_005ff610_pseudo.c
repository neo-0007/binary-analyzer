
undefined4 FUN_005ff610(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined4 uVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  byte *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (char *)0x0;
  if (param_1 == (uint *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0x1ef,"OSSL_HTTP_REQ_CTX_nbio");
    FUN_0051f8f0(0x3d,0xc0102,0);
    uVar15 = 0;
  }
  else {
    if (((*(long *)(param_1 + 0x16) != 0) && (*(long *)(param_1 + 6) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      uVar7 = *param_1;
      pcVar14 = *(char **)(param_1 + 2);
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      bVar4 = false;
      bVar3 = false;
LAB_005ff690:
      if ((uVar7 & 0x1000) != 0) goto LAB_005ff6d8;
      uVar7 = param_1[0x1e];
joined_r0x005ff69a:
      if (uVar7 == 0) {
        FUN_0051f000();
        iVar6 = FUN_004abaa0(*(undefined8 *)(param_1 + 8),pcVar14,param_1[4]);
        uVar16 = (ulong)iVar6;
        if (iVar6 == -2) {
          FUN_0051f050();
          iVar6 = FUN_004abe60(*(undefined8 *)(param_1 + 8),pcVar14,param_1[4]);
          uVar16 = (ulong)iVar6;
        }
        else {
          FUN_0051f1a0();
        }
      }
      else {
        iVar6 = FUN_004ab770(*(undefined8 *)(param_1 + 8),pcVar14,param_1[4]);
        uVar16 = (ulong)iVar6;
      }
      if ((long)uVar16 < 1) {
        iVar6 = FUN_004ab6d0(*(undefined8 *)(param_1 + 8),8);
        if (iVar6 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/http/http_client.c",0x20a,"OSSL_HTTP_REQ_CTX_nbio");
          FUN_0051f8f0(0x3d,0x80,0);
          uVar15 = 0;
        }
        else {
LAB_00600115:
          uVar15 = 0xffffffff;
        }
        goto LAB_005ffc9b;
      }
      iVar6 = FUN_004ab7e0(*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 2),
                           uVar16 & 0xffffffff);
      if ((long)iVar6 != uVar16) goto LAB_005ffaf3;
      uVar7 = *param_1;
LAB_005ff6d8:
      if (0x1005 < (int)uVar7) goto LAB_005ff84d;
      if (0xfff < (int)uVar7) {
        switch(uVar7) {
        case 0x1001:
          goto switchD_005ff704_caseD_1001;
        case 0x1002:
          goto switchD_005ff704_caseD_1002;
        case 0x1003:
        case 0x1004:
          if (0 < *(long *)(param_1 + 0x22)) goto LAB_005ff804;
          if (uVar7 == 0x1003) goto LAB_005ffee0;
          goto LAB_005ff72b;
        case 0x1005:
          goto switchD_005ff704_caseD_1005;
        default:
          uVar15 = 0;
          goto LAB_005ffc9b;
        }
      }
      if ((int)uVar7 < 4) {
        if (0 < (int)uVar7) {
          bVar2 = bVar3;
LAB_005ff8fd:
          while ((lVar9 = FUN_004abd40(*(undefined8 *)(param_1 + 0x16),3,0,&local_58), bVar3 = bVar2
                 , 0 < lVar9 && (lVar10 = thunk_FUN_007134f0(local_58,10,lVar9), lVar10 != 0))) {
            uVar7 = FUN_004abaa0(*(undefined8 *)(param_1 + 0x16),pcVar14,param_1[4]);
            if ((int)uVar7 < 1) {
              iVar6 = FUN_004ab6d0(*(undefined8 *)(param_1 + 0x16),8);
              pbVar13 = local_58;
              if (iVar6 != 0) goto LAB_005ff871;
              goto LAB_006000f6;
            }
            if (uVar7 == param_1[4]) {
              FUN_0051f420();
              FUN_0051f540("../crypto/http/http_client.c",0x276,"OSSL_HTTP_REQ_CTX_nbio");
              FUN_0051f8f0(0x3d,0x71,0);
              *param_1 = 0x1000;
              uVar15 = 0;
              goto LAB_005ffc9b;
            }
            if (*param_1 == 1) {
              iVar6 = thunk_FUN_00712ab0(pcVar14,"HTTP/1.",7);
              pcVar11 = pcVar14;
              if (iVar6 != 0) goto LAB_005ffb72;
              bVar2 = '0' < pcVar14[7];
              cVar5 = *pcVar14;
              pcVar17 = pcVar14;
              if (cVar5 != '\0') {
                do {
                  iVar6 = FUN_005466b0((int)cVar5,8);
                  if (iVar6 != 0) goto LAB_005ffb69;
                  cVar5 = pcVar17[1];
                  pcVar17 = pcVar17 + 1;
                } while (cVar5 != '\0');
                goto LAB_005ffb72;
              }
              goto LAB_005ffba8;
            }
            pcVar11 = (char *)thunk_FUN_00712710(pcVar14,0x3a);
            if (pcVar11 != (char *)0x0) {
              *pcVar11 = '\0';
              do {
                pcVar11 = pcVar11 + 1;
                iVar6 = FUN_005466b0((int)*pcVar11,8);
              } while (iVar6 != 0);
              local_50 = (char *)thunk_FUN_00712710(pcVar11,0xd);
              if (((local_50 != (char *)0x0) ||
                  (local_50 = (char *)thunk_FUN_00712710(pcVar11,10), local_50 != (char *)0x0)) &&
                 (*local_50 = '\0', local_50 != (char *)0x0)) {
                if ((*param_1 == 3) && (iVar6 = FUN_0041c9c0(pcVar14,"Location"), iVar6 == 0)) {
                  *(char **)(param_1 + 0x2e) = pcVar11;
                  uVar15 = 0;
                  goto LAB_005ffc9b;
                }
                if ((*(long *)(param_1 + 0x1c) != 0) &&
                   (iVar6 = FUN_0041c9c0(pcVar14,"Content-Type"), iVar6 == 0)) {
                  iVar6 = FUN_0041c9c0(*(undefined8 *)(param_1 + 0x1c),pcVar11);
                  if (iVar6 != 0) {
                    FUN_0051f420();
                    FUN_0051f540("../crypto/http/http_client.c",0x2a4,"OSSL_HTTP_REQ_CTX_nbio");
                    FUN_0051f8f0(0x3d,0x76,"expected=%s, actual=%s",*(undefined8 *)(param_1 + 0x1c),
                                 pcVar11);
                    uVar15 = 0;
                    goto LAB_005ffc9b;
                  }
                  bVar4 = true;
                }
                iVar6 = FUN_0041c9c0(pcVar14,"Connection");
                if (iVar6 == 0) {
                  iVar6 = FUN_0041c9c0(pcVar11,"keep-alive");
                  if (iVar6 == 0) {
                    bVar3 = true;
                  }
                  else {
                    iVar6 = FUN_0041c9c0(pcVar11,"close");
                    bVar3 = false;
                    if (iVar6 != 0) {
                      bVar3 = bVar2;
                    }
                  }
                }
                else {
                  iVar6 = FUN_0041c9c0(pcVar14,"Content-Length");
                  if (iVar6 == 0) {
                    FUN_006e9510(pcVar11,&local_50,10);
                    if ((local_50 == pcVar11) || (*local_50 != '\0')) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/http/http_client.c",0x2b5,"OSSL_HTTP_REQ_CTX_nbio");
                      FUN_0051f8f0(0x3d,0x77,"input=%s",pcVar11);
                      uVar15 = 0;
                      goto LAB_005ffc9b;
                    }
                    iVar6 = FUN_005fec30(param_1);
                    if (iVar6 == 0) goto LAB_005ffaf3;
                  }
                }
              }
            }
            bVar1 = **(byte **)(param_1 + 2);
            local_58 = *(byte **)(param_1 + 2);
            while( true ) {
              if (bVar1 == 0) {
                uVar7 = param_1[0x28];
                if (((uVar7 != 0) && (!bVar3)) && (param_1[0x28] = 0, uVar7 == 2)) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/http/http_client.c",0x2cb,"OSSL_HTTP_REQ_CTX_nbio");
                  FUN_0051f8f0(0x3d,0x7f,0);
                  uVar15 = 0;
                  goto LAB_005ffc9b;
                }
                if (*param_1 == 0x1000) goto LAB_005ffaf3;
                if ((*(long *)(param_1 + 0x1c) != 0) && (!bVar4)) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/http/http_client.c",0x2d5,"OSSL_HTTP_REQ_CTX_nbio");
                  FUN_0051f8f0(0x3d,0x79,"expected=%s",*(undefined8 *)(param_1 + 0x1c));
                  uVar15 = 0;
                  goto LAB_005ffc9b;
                }
                if (*param_1 == 3) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/http/http_client.c",0x2db,"OSSL_HTTP_REQ_CTX_nbio");
                  FUN_0051f8f0(0x3d,0x6f,0);
                  uVar15 = 0;
                  goto LAB_005ffc9b;
                }
                if (param_1[0x1e] == 0) {
                  *param_1 = 0x1007;
                  uVar15 = 1;
                  goto LAB_005ffc9b;
                }
                *param_1 = 4;
                goto LAB_005ff88a;
              }
              if ((bVar1 != 0xd) && (bVar2 = bVar3, bVar1 != 10)) break;
              bVar1 = local_58[1];
              local_58 = local_58 + 1;
            }
          }
          if ((int)param_1[4] <= lVar9) goto LAB_006000f6;
          pcVar14 = *(char **)(param_1 + 2);
          uVar7 = *param_1;
          goto LAB_005ff690;
        }
LAB_005ff84d:
        uVar16 = FUN_004abd40(*(undefined8 *)(param_1 + 0x16),3,0,0);
        pbVar13 = local_58;
        bVar2 = bVar3;
        if ((-1 < (long)uVar16) && (*(ulong *)(param_1 + 0x24) <= uVar16)) {
          *param_1 = 0x1006;
          uVar15 = 1;
          goto LAB_005ffc9b;
        }
      }
      else {
        if (uVar7 != 4) goto LAB_005ff84d;
LAB_005ff88a:
        lVar9 = FUN_004abd40(*(undefined8 *)(param_1 + 0x16),3,0,&local_58);
        pbVar13 = local_58;
        bVar2 = bVar3;
        if (1 < lVar9) {
          pbVar13 = local_58 + 1;
          if (*local_58 != 0x30) {
            local_58 = pbVar13;
            FUN_0051f420();
            FUN_0051f540("../crypto/http/http_client.c",0x2f3,"OSSL_HTTP_REQ_CTX_nbio");
            FUN_0051f8f0(0x3d,0x6e,0);
            uVar15 = 0;
            goto LAB_005ffc9b;
          }
          bVar1 = local_58[1];
          uVar16 = (ulong)(byte)(bVar1 + 2);
          if ((char)bVar1 < '\0') {
            if (lVar9 < 6) goto LAB_005ff871;
            uVar7 = bVar1 & 0x7f;
            if (3 < (byte)((char)uVar7 - 1U)) {
              local_58 = pbVar13;
              FUN_0051f420(uVar7,uVar16);
              FUN_0051f540("../crypto/http/http_client.c",0x302,"OSSL_HTTP_REQ_CTX_nbio");
              FUN_0051f8f0(0x3d,0x6d,0);
              uVar15 = 0;
              goto LAB_005ffc9b;
            }
            if ((char)uVar7 == '\0') {
              uVar16 = 0;
              local_58 = local_58 + 2;
            }
            else {
              pbVar12 = local_58 + (uVar7 + 2);
              uVar16 = 0;
              pbVar13 = local_58 + 2;
              do {
                local_58 = pbVar13 + 1;
                uVar16 = uVar16 << 8 | (ulong)*pbVar13;
                pbVar13 = local_58;
              } while (local_58 != pbVar12);
            }
            uVar16 = (uVar7 + 2) + uVar16;
            pbVar13 = local_58;
          }
          local_58 = pbVar13;
          iVar6 = FUN_005fec30(param_1,uVar16);
          if (iVar6 != 0) {
            *param_1 = 5;
            goto LAB_005ff84d;
          }
LAB_005ffaf3:
          uVar15 = 0;
          goto LAB_005ffc9b;
        }
      }
LAB_005ff871:
      local_58 = pbVar13;
      pcVar14 = *(char **)(param_1 + 2);
      uVar7 = *param_1;
      bVar3 = bVar2;
      goto LAB_005ff690;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",499,"OSSL_HTTP_REQ_CTX_nbio");
    FUN_0051f8f0(0x3d,0xc0101,0);
    uVar15 = 0;
  }
LAB_005ffc9b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar15;
switchD_005ff704_caseD_1001:
  iVar6 = FUN_004ab7e0(*(undefined8 *)(param_1 + 0x16),&DAT_00806cba,2);
  if (iVar6 != 2) goto LAB_006000f6;
  *param_1 = 0x1002;
switchD_005ff704_caseD_1002:
  lVar9 = FUN_004abd40(*(undefined8 *)(param_1 + 0x16),3,0,param_1 + 0x20);
  *param_1 = 0x1003;
  *(long *)(param_1 + 0x22) = lVar9;
  if (0 < lVar9) {
LAB_005ff804:
    iVar6 = FUN_004ab7e0(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x20));
    if (iVar6 < 1) {
LAB_006000e4:
      iVar6 = FUN_004ab6d0(*(undefined8 *)(param_1 + 6),8);
      if (iVar6 != 0) goto LAB_00600115;
      goto LAB_006000f6;
    }
    pcVar14 = *(char **)(param_1 + 2);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (long)iVar6;
    *(long *)(param_1 + 0x22) = *(long *)(param_1 + 0x22) - (long)iVar6;
    uVar7 = *param_1;
    goto LAB_005ff690;
  }
LAB_005ffee0:
  FUN_004abd40(*(undefined8 *)(param_1 + 0x16),1,0,0);
  *param_1 = 0x1004;
LAB_005ff72b:
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (iVar6 = FUN_004abd40(*(long *)(param_1 + 0x18),2,0,0), iVar6 == 0)) {
    iVar6 = FUN_004ab770(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 2),param_1[4]);
    if (0 < (long)iVar6) {
      pcVar14 = *(char **)(param_1 + 2);
      *(long *)(param_1 + 0x22) = (long)iVar6;
      uVar7 = *param_1;
      *(char **)(param_1 + 0x20) = pcVar14;
      goto LAB_005ff690;
    }
    iVar6 = FUN_004ab6d0(*(undefined8 *)(param_1 + 8),8);
    if (iVar6 != 0) goto LAB_00600115;
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0x23c,"OSSL_HTTP_REQ_CTX_nbio");
    FUN_0051f8f0(0x3d,0x80,0);
    uVar15 = 0;
    goto LAB_005ffc9b;
  }
  *param_1 = 0x1005;
switchD_005ff704_caseD_1005:
  iVar6 = FUN_004abd40(*(undefined8 *)(param_1 + 6),0xb,0,0);
  if (iVar6 < 1) goto LAB_006000e4;
  uVar7 = param_1[0x1e];
  pcVar14 = *(char **)(param_1 + 2);
  *param_1 = 1;
  goto joined_r0x005ff69a;
LAB_005ffb69:
  if (*pcVar17 == '\0') goto LAB_005ffb72;
  iVar6 = FUN_005466b0((int)*pcVar17,8);
  if (iVar6 == 0) {
    cVar5 = *pcVar17;
    pcVar18 = pcVar17;
    if (cVar5 != '\0') goto LAB_005ffda0;
    goto LAB_005ffb72;
  }
  pcVar17 = pcVar17 + 1;
  goto LAB_005ffb69;
  while( true ) {
    cVar5 = pcVar18[1];
    pcVar18 = pcVar18 + 1;
    if (cVar5 == '\0') break;
LAB_005ffda0:
    iVar6 = FUN_005466b0((int)cVar5,8);
    if (iVar6 != 0) {
      if (*pcVar18 != '\0') {
        *pcVar18 = '\0';
        iVar6 = FUN_006e9510(pcVar17,&local_48,10);
        if (*local_48 == '\0') {
          cVar5 = pcVar18[1];
          goto joined_r0x005ffdfe;
        }
      }
      break;
    }
  }
LAB_005ffb72:
  cVar5 = *pcVar14;
LAB_005ffba8:
  while (cVar5 != '\0') {
    iVar6 = FUN_005466b0((int)cVar5,0x100);
    if (iVar6 == 0) {
      *pcVar11 = ' ';
    }
    pcVar17 = pcVar11 + 1;
    pcVar11 = pcVar14 + 0x3c;
    if (pcVar14 + 0x3c == pcVar17) break;
    pcVar11 = pcVar17;
    cVar5 = *pcVar17;
  }
  *pcVar11 = '\0';
  FUN_0051f420();
  FUN_0051f540("../crypto/http/http_client.c",0x1c2,"parse_http_line1");
  FUN_0051f8f0(0x3d,0x7e,"content=%s",pcVar14);
  goto LAB_005ffbea;
joined_r0x005ffdfe:
  pcVar18 = pcVar18 + 1;
  if (cVar5 == '\0') goto LAB_005ffe67;
  iVar8 = FUN_005466b0((int)cVar5,8);
  if (iVar8 == 0) {
    if (*pcVar18 != '\0') {
      lVar9 = thunk_FUN_007129d0(pcVar18);
      local_48 = pcVar18 + lVar9 + -1;
      while (iVar8 = FUN_005466b0((int)*local_48,8), iVar8 != 0) {
        *local_48 = '\0';
        local_48 = local_48 + -1;
      }
    }
    goto LAB_005ffe67;
  }
  cVar5 = pcVar18[1];
  goto joined_r0x005ffdfe;
LAB_005ffe67:
  if (iVar6 == 200) {
    *param_1 = 2;
    goto LAB_005ff8fd;
  }
  if (1 < iVar6 - 0x12dU) {
    cVar5 = (iVar6 < 400) * '\t' + 'i';
    if (*pcVar18 == '\0') {
      FUN_0051f420();
      FUN_0051f540("../crypto/http/http_client.c",0x1b6,"parse_http_line1");
      FUN_0051f8f0(0x3d,cVar5,"code=%s",pcVar17);
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/http/http_client.c",0x1b8,"parse_http_line1");
      FUN_0051f8f0(0x3d,cVar5,"code=%s, reason=%s",pcVar17,pcVar18);
    }
    if (1 < iVar6 - 0x12dU) goto LAB_005ffbea;
  }
  if (param_1[0x1a] == 0) {
    *param_1 = 3;
    goto LAB_005ff8fd;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/http/http_client.c",0x287,"OSSL_HTTP_REQ_CTX_nbio");
  FUN_0051f8f0(0x3d,0x74,0);
LAB_005ffbea:
  *param_1 = 0x1000;
  goto LAB_005ff8fd;
LAB_006000f6:
  *param_1 = 0x1000;
  uVar15 = 0;
  goto LAB_005ffc9b;
}

