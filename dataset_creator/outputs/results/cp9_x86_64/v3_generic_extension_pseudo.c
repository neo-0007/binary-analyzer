
X509_EXTENSION *
v3_generic_extension(char *param_1,char *param_2,int param_3,int param_4,X509V3_CTX *param_5)

{
  int iVar1;
  ASN1_OBJECT *obj;
  ASN1_TYPE *a;
  ASN1_OCTET_STRING *data;
  X509_EXTENSION *pXVar2;
  uchar *ptr;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  obj = OBJ_txt2obj(param_1,0);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_conf.c",0xf5,"v3_generic_extension");
    uVar4 = 0x73;
    pcVar3 = "name=%s";
  }
  else {
    if (param_4 == 1) {
      ptr = (uchar *)OPENSSL_hexstr2buf(param_2,&local_50);
LAB_0061d30e:
      if (ptr != (uchar *)0x0) {
        data = ASN1_OCTET_STRING_new();
        if (data == (ASN1_OCTET_STRING *)0x0) {
          ERR_new();
          pXVar2 = (X509_EXTENSION *)0x0;
          ERR_set_debug("../crypto/x509/v3_conf.c",0x106,"v3_generic_extension");
          ERR_set_error(0x22,0xc0100,0);
        }
        else {
          data->data = ptr;
          ptr = (uchar *)0x0;
          data->length = (int)local_50;
          pXVar2 = X509_EXTENSION_create_by_OBJ((X509_EXTENSION **)0x0,obj,param_3,data);
        }
        goto LAB_0061d352;
      }
    }
    else if (param_4 == 2) {
      local_48 = (uchar *)0x0;
      a = ASN1_generate_v3(param_2,param_5);
      if (a != (ASN1_TYPE *)0x0) {
        iVar1 = i2d_ASN1_TYPE(a,&local_48);
        local_50 = (long)iVar1;
        ASN1_TYPE_free(a);
        ptr = local_48;
        goto LAB_0061d30e;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_conf.c",0x100,"v3_generic_extension");
    uVar4 = 0x74;
    pcVar3 = "value=%s";
    param_1 = param_2;
  }
  pXVar2 = (X509_EXTENSION *)0x0;
  data = (ASN1_STRING *)0x0;
  ERR_set_error(0x22,uVar4,pcVar3,param_1);
  ptr = (uchar *)0x0;
LAB_0061d352:
  ASN1_OBJECT_free(obj);
  ASN1_OCTET_STRING_free(data);
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

