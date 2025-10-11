
int core_obj_add_sigid(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  int signid;
  int pkey_id;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  signid = OBJ_txt2nid(param_2);
  pkey_id = OBJ_txt2nid(param_4);
  if ((((param_3 == (char *)0x0) || (*param_3 == '\0')) ||
      (iVar2 = OBJ_txt2nid(param_3), iVar2 != 0)) && (signid != 0)) {
    iVar1 = OBJ_find_sigid_algs(signid,(int *)0x0,(int *)0x0);
    if (iVar1 != 0) {
      return 1;
    }
    if (pkey_id != 0) {
      iVar2 = OBJ_add_sigid(signid,iVar2,pkey_id);
      return iVar2;
    }
  }
  return 0;
}

