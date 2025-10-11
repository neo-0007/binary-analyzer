
int PEM_def_callback(char *buf,int num,int w,void *key)

{
  int iVar1;
  size_t sVar2;
  char *prompt;
  
  if (key == (void *)0x0) {
    prompt = EVP_get_pw_prompt();
    if (prompt == (char *)0x0) {
      prompt = "Enter PEM pass phrase:";
    }
    iVar1 = EVP_read_pw_string_min(buf,(uint)(w != 0) << 2,num,prompt,w);
    if (iVar1 == 0) {
      sVar2 = strlen(buf);
      return (int)sVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/pem/pem_lib.c",0x3e,"PEM_def_callback");
    iVar1 = -1;
    ERR_set_error(9,0x6d,0);
    memset(buf,0,(ulong)(uint)num);
  }
  else {
    sVar2 = strlen((char *)key);
    iVar1 = (int)sVar2;
    if (num <= (int)sVar2) {
      iVar1 = num;
    }
    memcpy(buf,key,(long)iVar1);
  }
  return iVar1;
}

