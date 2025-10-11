
bool core_obj_create(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  int iVar1;
  
  iVar1 = OBJ_txt2nid(param_2);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = OBJ_create(param_2,param_3,param_4);
  return iVar1 != 0;
}

