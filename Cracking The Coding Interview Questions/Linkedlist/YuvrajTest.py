class Authorization:
  def __init__(self, permissions, users):
    self.permissions = permissions
    self.users = users
    self.role = []
    self.permissionRole = []
    self.listPermissions = []

  def list_permissions(self, user_id):
      for i in self.users:
          if i['id'] == user_id:
              self.role = i['roles']
      
      for k in self.permissions:
          for j in self.role:
              if j in k['role'] and k['active'] == True:
                  self.listPermissions.append(k['name'])

      return self.listPermissions

              


  def check_permitted(self, permission_name, user_id):
      for i in self.users:
          if i['id'] == user_id:
              for k in i['roles']:
                  self.permissionRole.append(k)
      
      for j in self.permissions:
          if j['role'] in self.permissionRole and j['name'] == permission_name:
              return j['active']



if __name__ == "__main__":
    users = [{'id': 1, 'name': 'Anna Administrator', 'roles': ['superuser']}, 
            {'id': 7, 'name': 'Ryder', 'roles': ['rider']}, 
            {'id': 11, 'name': 'Unregistered Ulysses', 'roles': []},
            {'id': 18, 'name': 'Tessa Tester', 'roles': ['beta tester']}]

    permissions = [{'role': 'superuser', 'name': 'lock user account', 'active': True}, 
                 {'role': 'superuser', 'name': 'unlock user account', 'active': True}, 
                 {'role': 'superuser', 'name': 'purchase widgets', 'active': False},
                 {'role': 'charger', 'name': 'view pick up locations', 'active': True}, 
                 {'role': 'rider', 'name': 'view my profile', 'active': True}, 
                 {'role': 'rider', 'name': 'scooters near me', 'active': True}]

    aa = Authorization(permissions, users)
    print(aa.list_permissions(1))
    print(aa.check_permitted('lock user account',1))