from django.urls import path
from . import views

urlpatterns = [
   path('', views.home, name='home'),
   path('add.html', views.fileupload, name='upload'),
]
