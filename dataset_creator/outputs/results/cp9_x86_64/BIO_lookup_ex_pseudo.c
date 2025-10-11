
undefined4
BIO_lookup_ex(char *param_1,char *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
             addrinfo **param_7)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  size_t sVar5;
  addrinfo *paVar6;
  long lVar7;
  sockaddr *psVar8;
  char *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 3) {
    if (-1 < param_4) {
      if (param_4 != 1) goto LAB_005acc85;
      sVar5 = strlen(param_1);
      paVar6 = (addrinfo *)CRYPTO_zalloc(0x30,"../crypto/bio/bio_addr.c",0x245);
      *param_7 = paVar6;
      if (paVar6 == (addrinfo *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_addr.c",0x246,"addrinfo_wrap");
        ERR_set_error(0x20,0xc0100,0);
      }
      else {
        paVar6->ai_family = 1;
        paVar6->ai_socktype = param_5;
        paVar6->ai_protocol = 0;
        lVar7 = BIO_ADDR_new();
        if (lVar7 != 0) {
          BIO_ADDR_rawmake(lVar7,1,param_1,sVar5,0);
          paVar6 = *param_7;
          psVar8 = (sockaddr *)BIO_ADDR_sockaddr_noconst(lVar7);
          paVar6->ai_addr = psVar8;
        }
        uVar12 = 1;
        (*param_7)->ai_next = (addrinfo *)0x0;
        if ((*param_7)->ai_addr != (sockaddr *)0x0) goto LAB_005acc55;
        BIO_ADDRINFO_free();
        *param_7 = (addrinfo *)0x0;
      }
      ERR_new();
      uVar11 = 0x2a7;
LAB_005acd6f:
      ERR_set_debug("../crypto/bio/bio_addr.c",uVar11,"BIO_lookup_ex");
      uVar12 = 0;
      ERR_set_error(0x20,0xc0100,0);
      goto LAB_005acc55;
    }
  }
  else if (param_4 == 10) {
LAB_005acc85:
    iVar3 = BIO_sock_init();
    if (iVar3 != 1) {
      uVar12 = 0;
      goto LAB_005acc55;
    }
    local_68 = (undefined1  [16])0x0;
    auVar1._4_4_ = param_5;
    auVar1._0_4_ = param_4;
    auVar1._8_4_ = param_6;
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auVar1;
    local_78 = auVar2 << 0x20;
    local_58 = (undefined1  [16])0x0;
    if ((param_1 != (char *)0x0) && (param_4 == 0)) {
      local_78._4_12_ = auVar1;
      local_78._0_4_ = 0x20;
    }
    if (param_3 == 1) {
      local_78._0_4_ = local_78._0_4_ | 1;
    }
    iVar3 = 0;
    while( true ) {
      iVar4 = getaddrinfo(param_1,param_2,(addrinfo *)local_78,param_7);
      if (iVar4 == -10) break;
      uVar12 = 1;
      if (iVar4 == 0) goto LAB_005acc55;
      if (iVar4 == -0xb) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_addr.c",0x2cc,"BIO_lookup_ex");
        piVar10 = __errno_location();
        ERR_set_error(2,*piVar10,"calling getaddrinfo()");
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_addr.c",0x2ce,"BIO_lookup_ex");
        pcVar9 = (char *)0x0;
LAB_005ace50:
        uVar12 = 0;
        ERR_set_error(0x20,0x80002,pcVar9);
        goto LAB_005acc55;
      }
      if ((local_78 & (undefined1  [16])0x20) == (undefined1  [16])0x0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_addr.c",0x2e2,"BIO_lookup_ex");
        if (iVar3 == 0) {
          iVar3 = iVar4;
        }
        pcVar9 = gai_strerror(iVar3);
        goto LAB_005ace50;
      }
      local_78._0_4_ = local_78._0_4_ & 0xffffffdf | 4;
      iVar3 = iVar4;
    }
    ERR_new();
    uVar11 = 0x2d3;
    goto LAB_005acd6f;
  }
  ERR_new();
  uVar12 = 0;
  ERR_set_debug("../crypto/bio/bio_addr.c",0x29e,"BIO_lookup_ex");
  ERR_set_error(0x20,0x83,0);
LAB_005acc55:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

