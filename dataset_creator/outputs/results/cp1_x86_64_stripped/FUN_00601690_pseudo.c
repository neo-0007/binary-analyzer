
undefined4
FUN_00601690(long param_1,long param_2,char *param_3,long param_4,undefined1 *param_5,int param_6,
            long param_7,long param_8)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  long local_50;
  undefined1 *local_48;
  
  puVar3 = (undefined1 *)FUN_0041ad90(0x2000,"../crypto/http/http_client.c",0x4e3);
  uVar4 = FUN_00617400();
  lVar5 = FUN_004ab550(uVar4);
  local_50 = 0;
  if (0 < param_6) {
    local_50 = FUN_007607a0(0);
    local_50 = param_6 + local_50;
  }
  if (((param_1 == 0) || (param_2 == 0)) || ((param_7 != 0 && (param_8 == 0)))) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0x4ed,"OSSL_HTTP_proxy_connect");
    FUN_0051f8f0(0x3d,0xc0102,0);
LAB_00601751:
    if (lVar5 == 0) {
      uVar11 = 0;
      goto LAB_0060175d;
    }
LAB_00601a21:
    uVar11 = 0;
  }
  else {
    if (param_3 == (char *)0x0) {
      param_3 = "443";
    }
    else if (*param_3 == '\0') {
      param_3 = "443";
    }
    if ((puVar3 == (undefined1 *)0x0) || (lVar5 == 0)) {
      FUN_004ae9e0(param_7,"%s: out of memory",param_8);
      goto LAB_00601751;
    }
    FUN_004ac2c0(lVar5,param_1);
    FUN_004ae9e0(lVar5,"CONNECT %s:%s HTTP/1.0\r\n",param_2,param_3);
    FUN_004ae9e0(lVar5,"Proxy-Connection: Keep-Alive\r\n");
    if (param_4 != 0) {
      lVar6 = thunk_FUN_007129d0(param_4);
      uVar12 = lVar6 + 1;
      if (param_5 == (undefined1 *)0x0) {
        lVar6 = lVar6 + 2;
        lVar7 = FUN_0041ad90(lVar6,"../crypto/http/http_client.c",0x508);
        if (lVar7 != 0) {
          local_48 = &DAT_0083e5c2;
          goto LAB_00601831;
        }
      }
      else {
        lVar6 = thunk_FUN_007129d0(param_5);
        uVar12 = uVar12 + lVar6;
        lVar6 = uVar12 + 1;
        lVar7 = FUN_0041ad90(lVar6,"../crypto/http/http_client.c",0x508);
        local_48 = param_5;
        if (lVar7 != 0) {
LAB_00601831:
          iVar2 = FUN_004aeb30(lVar7,lVar6,"%s:%s",param_4,local_48);
          if (iVar2 == (int)uVar12) {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar12;
            uVar8 = ((uVar12 / 3 + 1) -
                    (ulong)(uVar12 ==
                           (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) +
                           uVar12 / 3)) * 4;
            lVar6 = FUN_0041ad90(uVar8 + 1,"../crypto/http/http_client.c",0x4cc);
            if (lVar6 != 0) {
              iVar2 = FUN_005fd420(lVar6,lVar7,iVar2);
              if ((-1 < iVar2) && ((ulong)(long)iVar2 <= uVar8)) {
                FUN_004ae9e0(lVar5,"Proxy-Authorization: Basic %s\r\n",lVar6);
                uVar4 = thunk_FUN_007129d0(lVar6);
                FUN_0041aef0(lVar6,uVar4,"../crypto/http/http_client.c",0x511);
                FUN_0041aef0(lVar7,uVar12,"../crypto/http/http_client.c",0x514);
                goto LAB_00601935;
              }
              FUN_0041ad60(lVar6,"../crypto/http/http_client.c",0x4d2);
            }
          }
          FUN_0041aef0(lVar7,uVar12,"../crypto/http/http_client.c",0x514);
          uVar11 = 0;
          goto LAB_00601a24;
        }
      }
      goto LAB_00601a21;
    }
LAB_00601935:
    FUN_004ae9e0(lVar5,&DAT_00806cba);
    do {
      iVar2 = FUN_004abd40(lVar5,0xb,0,0);
      if (iVar2 != 0) break;
      iVar2 = FUN_004ab6d0(lVar5,8);
    } while (iVar2 != 0);
    do {
      iVar2 = FUN_004ac6c0(lVar5,local_50,100);
      if (iVar2 < 1) {
        pcVar9 = "timed out";
        if (iVar2 != 0) {
          pcVar9 = "failed waiting for data";
        }
        uVar11 = 0;
        FUN_004ae9e0(param_7,"%s: HTTP CONNECT %s\n",param_8,pcVar9);
        goto LAB_00601a24;
      }
      iVar2 = FUN_004abaa0(lVar5,puVar3,0x2000);
      lVar6 = (long)iVar2;
    } while (iVar2 < 0xd);
    iVar2 = thunk_FUN_00712ab0(puVar3,"HTTP/",5);
    if (iVar2 == 0) {
      if ((puVar3[5] != '1') || (puVar3[6] != '.')) {
        FUN_0051f420();
        FUN_0051f540("../crypto/http/http_client.c",0x541,"OSSL_HTTP_proxy_connect");
        FUN_0051f8f0(0x3d,0x6a,0);
        FUN_004ae9e0(param_7,"%s: HTTP CONNECT failed, bad HTTP version %.*s\n",param_8,3,puVar3 + 5
                    );
        goto LAB_00601a21;
      }
      if ((puVar3[8] == ' ') && (puVar3[9] == '2')) {
        do {
          iVar2 = FUN_004abaa0(lVar5,puVar3,0x2000);
        } while (2 < iVar2);
        uVar11 = 1;
      }
      else {
        do {
          iVar2 = FUN_005466b0((int)(char)puVar3[lVar6 + -1],8);
          if (iVar2 == 0) {
            puVar10 = puVar3 + lVar6;
            break;
          }
          lVar6 = lVar6 + -1;
          puVar10 = puVar3;
        } while (lVar6 != 0);
        *puVar10 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/http/http_client.c",0x54f,"OSSL_HTTP_proxy_connect");
        FUN_0051f8f0(0x3d,100,"reason=%s",puVar3 + 8);
        FUN_004ae9e0(param_7,"%s: HTTP CONNECT failed, reason=%s\n",param_8,puVar3 + 8);
        uVar11 = 0;
      }
    }
    else {
      FUN_0051f420();
      uVar11 = 0;
      FUN_0051f540("../crypto/http/http_client.c",0x539,"OSSL_HTTP_proxy_connect");
      FUN_0051f8f0(0x3d,0x7e,0);
      FUN_004ae9e0(param_7,"%s: HTTP CONNECT failed, non-HTTP response\n",param_8);
    }
  }
LAB_00601a24:
  FUN_004abd40(lVar5,0xb,0,0);
  FUN_004ac310(lVar5);
  FUN_004ab560(lVar5);
LAB_0060175d:
  FUN_0041ad60(puVar3,"../crypto/http/http_client.c",0x568);
  return uVar11;
}

