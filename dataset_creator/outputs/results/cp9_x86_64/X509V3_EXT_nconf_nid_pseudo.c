
X509_EXTENSION * X509V3_EXT_nconf_nid(CONF *conf,X509V3_CTX *ctx,int ext_nid,char *value)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  X509_EXTENSION *pXVar4;
  char *pcVar5;
  char *local_30;
  
  local_30 = value;
  uVar2 = v3_check_critical(&local_30);
  iVar3 = v3_check_generic(&local_30);
  pcVar1 = local_30;
  if (iVar3 == 0) {
    pXVar4 = (X509_EXTENSION *)do_ext_nconf(conf,ctx,ext_nid,uVar2,local_30);
    return pXVar4;
  }
  pcVar5 = OBJ_nid2sn(ext_nid);
  pXVar4 = (X509_EXTENSION *)v3_generic_extension(pcVar5,pcVar1,uVar2,iVar3,ctx);
  return pXVar4;
}

