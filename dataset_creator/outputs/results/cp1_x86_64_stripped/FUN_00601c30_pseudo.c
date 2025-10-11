
undefined8
FUN_00601c30(char *param_1,long *param_2,long *param_3,long *param_4,long *param_5,uint *param_6,
            long *param_7,long *param_8,long *param_9)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  char *local_c0;
  byte *local_a8;
  char *local_a0;
  byte *local_98;
  char *local_80;
  byte *local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  if (param_9 != (long *)0x0) {
    *param_9 = 0;
  }
  if (param_8 != (long *)0x0) {
    *param_8 = 0;
  }
  if (param_1 == (char *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_lib.c",0x3e,"OSSL_parse_url");
    FUN_0051f8f0(0x3d,0xc0102,0);
    uVar13 = 0;
    goto LAB_00602228;
  }
  pcVar4 = (char *)FUN_004011e0(param_1,&DAT_0081aae0);
  pcVar14 = param_1;
  local_a0 = param_1;
  if (pcVar4 == (char *)0x0) {
LAB_00601d27:
    local_80 = (char *)thunk_FUN_00712710(local_a0,0x40);
    if (local_80 == (char *)0x0) {
      local_c0 = local_a0;
      local_80 = local_a0;
    }
    else {
      local_c0 = local_80 + 1;
    }
    if (*local_c0 == '[') {
      lVar6 = thunk_FUN_00712710(local_c0 + 1,0x5d);
      pbVar5 = (byte *)(lVar6 + 1);
      if (lVar6 == 0) goto LAB_00602291;
    }
    else {
      pbVar5 = (byte *)thunk_FUN_00712710(local_c0,0x3a);
      if ((((pbVar5 == (byte *)0x0) &&
           (pbVar5 = (byte *)thunk_FUN_00712710(local_c0,0x2f), pbVar5 == (byte *)0x0)) &&
          (pbVar5 = (byte *)thunk_FUN_00712710(local_c0,0x3f), pbVar5 == (byte *)0x0)) &&
         (pbVar5 = (byte *)thunk_FUN_00712710(local_c0,0x23), pbVar5 == (byte *)0x0)) {
        lVar6 = thunk_FUN_007129d0(local_c0);
        pbVar5 = (byte *)(local_c0 + lVar6);
      }
    }
    pbVar11 = (byte *)0x82dbc3;
    local_a8 = pbVar5;
    if (*pbVar5 == 0x3a) {
      pbVar11 = pbVar5 + 1;
      local_a8 = pbVar11;
    }
    iVar3 = FUN_006f4d00(pbVar11,"%u",&local_44);
    if ((iVar3 == 0) || (0xffff < local_44)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/http/http_lib.c",0x72,"OSSL_parse_url");
      FUN_0051f8f0(0x3d,0x7b,&DAT_007e3d61,pbVar11);
      goto LAB_0060214a;
    }
    bVar1 = *pbVar11;
    pbVar10 = pbVar11;
    while ((byte)(bVar1 - 0x30) < 10) {
      pbVar8 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar8;
    }
    if (local_a8 == pbVar11) {
      local_a8 = pbVar10;
    }
    if ((0x3f < *local_a8) || ((0x8000800800000001U >> ((ulong)*local_a8 & 0x3f) & 1) == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/http/http_lib.c",0x7d,"OSSL_parse_url");
      FUN_0051f8f0(0x3d,0x7d,0);
      goto LAB_00602291;
    }
    lVar6 = thunk_FUN_007129d0(local_a8);
    pbVar7 = local_a8 + lVar6;
    pbVar8 = (byte *)thunk_FUN_00712710(local_a8,0x3f);
    pbVar12 = local_a8;
    if ((pbVar8 == (byte *)0x0) || (pbVar12 = pbVar8, param_8 == (long *)0x0)) {
      pbVar9 = (byte *)thunk_FUN_00712710(pbVar12,0x23);
      pbVar12 = pbVar7;
      pbVar8 = pbVar7;
      pbVar2 = pbVar9;
    }
    else {
      pbVar9 = (byte *)thunk_FUN_00712710(pbVar8,0x23);
      pbVar12 = pbVar8 + 1;
      pbVar2 = pbVar8;
    }
    local_98 = pbVar7;
    local_78 = pbVar7;
    if (pbVar9 != (byte *)0x0) {
      pbVar8 = pbVar2;
      local_98 = pbVar9;
      local_78 = pbVar9 + 1;
    }
    if (param_2 != (long *)0x0) {
      lVar6 = FUN_0041c400(param_1,(long)pcVar14 - (long)param_1,"../crypto/http/http_lib.c",0x1c);
      *param_2 = lVar6;
      if (lVar6 != 0) goto LAB_00601f28;
      goto LAB_00602153;
    }
LAB_00601f28:
    if (param_4 != (long *)0x0) {
      lVar6 = FUN_0041c400(local_c0,(long)pbVar5 - (long)local_c0,"../crypto/http/http_lib.c",0x1c);
      *param_4 = lVar6;
      if (lVar6 == 0) goto LAB_0060214a;
    }
    if (param_5 != (long *)0x0) {
      lVar6 = FUN_0041c400(pbVar11,(long)pbVar10 - (long)pbVar11,"../crypto/http/http_lib.c",0x1c);
      *param_5 = lVar6;
      if (lVar6 == 0) goto LAB_0060214a;
    }
    if (param_3 == (long *)0x0) {
LAB_00601ff0:
      if (param_8 != (long *)0x0) {
        lVar6 = FUN_0041c400(pbVar12,(long)local_98 - (long)pbVar12,"../crypto/http/http_lib.c",0x1c
                            );
        *param_8 = lVar6;
        if (lVar6 == 0) goto LAB_0060214a;
      }
      if (param_9 != (long *)0x0) {
        lVar6 = FUN_0041c400(local_78,(long)pbVar7 - (long)local_78,"../crypto/http/http_lib.c",0x1c
                            );
        *param_9 = lVar6;
        if (lVar6 == 0) goto LAB_0060214a;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = local_44;
      }
      if (*local_a8 == 0x2f) {
        if (param_7 != (long *)0x0) {
          lVar6 = FUN_0041c400(local_a8,(long)pbVar8 - (long)local_a8,"../crypto/http/http_lib.c",
                               0x1c);
          *param_7 = lVar6;
          if (lVar6 == 0) goto LAB_0060214a;
        }
      }
      else if (param_7 != (long *)0x0) {
        lVar6 = FUN_0041ad90(pbVar8 + (2 - (long)local_a8),"../crypto/http/http_lib.c",0xa4);
        *param_7 = lVar6;
        if (lVar6 == 0) goto LAB_0060214a;
        FUN_004aeb30(lVar6,pbVar8 + (2 - (long)local_a8),"/%s",local_a8);
      }
      uVar13 = 1;
      goto LAB_00602228;
    }
    lVar6 = FUN_0041c400(local_a0,(long)local_80 - (long)local_a0,"../crypto/http/http_lib.c",0x1c);
    *param_3 = lVar6;
    if (lVar6 != 0) goto LAB_00601ff0;
    if (param_2 != (long *)0x0) goto LAB_0060214f;
    lVar6 = 0;
LAB_00602174:
    FUN_0041ad60(lVar6,"../crypto/http/http_lib.c",0x22);
    *param_3 = 0;
  }
  else {
    if (param_1 != pcVar4) {
      local_a0 = pcVar4 + 3;
      pcVar14 = pcVar4;
      goto LAB_00601d27;
    }
LAB_00602291:
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_lib.c",0xab,"OSSL_parse_url");
    FUN_0051f8f0(0x3d,0x65,0);
LAB_0060214a:
    if (param_2 != (long *)0x0) {
LAB_0060214f:
      lVar6 = *param_2;
LAB_00602153:
      FUN_0041ad60(lVar6,"../crypto/http/http_lib.c",0x22);
      *param_2 = 0;
    }
    if (param_3 != (long *)0x0) {
      lVar6 = *param_3;
      goto LAB_00602174;
    }
  }
  if (param_4 != (long *)0x0) {
    FUN_0041ad60(*param_4,"../crypto/http/http_lib.c",0x22);
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    FUN_0041ad60(*param_5,"../crypto/http/http_lib.c",0x22);
    *param_5 = 0;
  }
  if (param_7 != (long *)0x0) {
    FUN_0041ad60(*param_7,"../crypto/http/http_lib.c",0x22);
    *param_7 = 0;
  }
  if (param_8 != (long *)0x0) {
    FUN_0041ad60(*param_8,"../crypto/http/http_lib.c",0x22);
    *param_8 = 0;
  }
  uVar13 = 0;
  if (param_9 != (long *)0x0) {
    FUN_0041ad60(*param_9,"../crypto/http/http_lib.c",0x22);
    *param_9 = 0;
  }
LAB_00602228:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar13;
}

